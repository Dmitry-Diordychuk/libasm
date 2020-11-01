/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdustin <kdustin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:22:39 by kdustin           #+#    #+#             */
/*   Updated: 2020/10/31 18:48:38 by kdustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H

#include <stdio.h>
#include <errno.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
int 	ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
char 	*ft_strdup(const char *s);

#endif