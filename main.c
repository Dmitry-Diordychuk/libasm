/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdustin <kdustin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 10:16:11 by kdustin           #+#    #+#             */
/*   Updated: 2020/11/01 11:38:34 by kdustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

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

	printf("__________________________strcmp________________________________________________\n");
	printf("%d\n", ft_strcmp("", ""));
	//printf("%d\n", ft_strcmp("bon", "bon"));


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
