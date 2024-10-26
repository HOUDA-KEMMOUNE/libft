/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:31:06 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/23 12:26:19 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H //header guard
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int     ft_isalpha(int c);
int     ft_toupper(int c);
int     ft_isdigit(int c);
int     ft_tolower(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
size_t    ft_strlen(const char *s);
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t    ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
void    *ft_memset(void *b, int c, size_t len);

#endif
