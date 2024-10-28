/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:14:57 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/27 22:15:36 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1);
    size_t i;
    char *ptr;

    ptr = (char *)malloc(len + 1);

    i = 0;
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }

    return (ptr);
}
/*
int main()
{
    const char *str = "\0";
    char *r = ft_strdup(str);
    char *r2 = strdup(str);

    printf("The result is: %s\n", r);
    printf("The result is: %s\n", r2);

    free(r);
    free(r2);
}
*/