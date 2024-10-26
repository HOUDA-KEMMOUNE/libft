/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:35:55 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/24 14:35:59 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }

    if (c == '\0')
    {
        return ((char *)&s[i]);
    }

    return (NULL);
}
/*
int main()
{
    const char *str = "skibidi fortnite";
    //int c = 'b';
    char *r = ft_strchr(str, 'd');
    char *r2 = strchr(str, 'd');

    printf("%s\n", r);
    printf("%s\n", r2);
}
*/