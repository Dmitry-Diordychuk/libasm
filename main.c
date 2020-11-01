#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "libasm.h"

int main(void)
{
	printf("%ld\n", ft_strlen("Hello, world!"));
	printf("%ld\n", strlen("Hello, world!"));

	printf("%ld\n", ft_strlen(""));
	printf("%ld\n", strlen(""));

	printf("%ld\n", ft_strlen("Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!"));
	printf("%ld\n", strlen("Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!"));

	char *dest = strdup("Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!");
	char *src = strdup("Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!Bye!");
	printf("%s\n", strcpy(dest, src));
	printf("%s\n", ft_strcpy(dest, src));

	dest = strdup("");
	src = strdup("");
	printf("%s\n", strcpy(dest, src));
	printf("%s\n", ft_strcpy(dest, src));

	dest = strdup("Hello!");
	src = strdup("Hello!");
	printf("%d\n", strcmp(dest, src));
	printf("%d\n", ft_strcmp(dest, src));
	dest = strdup("Hello!");
	src = strdup("Hel");
	printf("%d\n", strcmp(dest, src));
	printf("%d\n", ft_strcmp(dest, src));
	dest = strdup("Hel");
	src = strdup("Hello!");
	printf("%d\n", strcmp(dest, src));
	printf("%d\n", ft_strcmp(dest, src));
	dest = strdup("Heioy!");
	src = strdup("Hello!");
	printf("%d\n", strcmp(dest, src));
	printf("%d\n", ft_strcmp(dest, src));

	ft_write(1, "Hello, world!\n", 14);
	
	// int fd = open("Makefile", O_RDONLY);
	// char buff[300];
	// ft_read(fd, buff, 300);
	// close(fd);
	// printf("%s", buff);

	// int fd = open("Makefile", O_RDONLY);
	// char buff[300];
	// read(fd, buff, 300);
	// close(fd);
	// printf("%s", buff);

	// int fd = open("Makefile", O_RDONLY);
	// char buff[300];
	// printf("%ld\n", ft_read(fd, buff, 300));
	// close(fd);
	// printf("%d\n", errno);
	// perror("Error");

	int fd = open("papka", O_RDONLY);
	char buff[300];
	printf("%ld\n", read(fd, buff, 300));
	close(fd);
	printf("%d\n", errno);
	perror("Error");

	char *str = ft_strdup("Hello, world!");
	printf("%s\n", str);
	return (0);
}
