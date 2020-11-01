NAME = libasm.a

OBJS = 	ft_read.o 	\
		ft_strcmp.o	\
		ft_strcpy.o	\
		ft_strdup.o \
		ft_strlen.o	\
		ft_write.o

CFLAGS = -Wall -Wextra -Werror

%.o: %.s libasm.h
	nasm -felf64 $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

test:
	$(CC) $(CFLAGS) -L. -lasm main.c -o test