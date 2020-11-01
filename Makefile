NAME = libasm.a

OBJS =	ft_strlen.o \
		ft_strcpy.o	\
		ft_strcmp.o	\
		ft_write.o	\
		ft_read.o 	\
		ft_strdup.o


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
	rm -f a.out

re:
	$(MAKE) fclean
	$(MAKE) all

test:
	$(CC) $(CFLAGS) main.c $(NAME) -I.