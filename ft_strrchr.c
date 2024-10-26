/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:22:29 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/24 19:22:33 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len; //for the length of s
    size_t e; //for the last index in c
    size_t b; //from the character to the end of the string
    size_t b2;

    len = 0;
    while (s[len])
    {
        len++;
    }

    b = 0;
    e = len;
    while (s[e] != s[0])
    {
        if (s[e] == (char)c)
        {
            b = e;
            b2 = 0;
            while (s[b + b2])
            {
                b2++;
            }
            return ((char *)&s[b]);
        }
        e--;
    }

    if ((char)c == s[0])
    {
        return ((char *)&s[e]);
    }

    return (NULL);
}
/*
int main()
{
    const char *str = "skibidi fortnite";
    char *r = ft_strrchr(str, '\0');
    char *r2 = strrchr(str, '\0');

    printf("%s\n", r);
    printf("%s\n", r2);

}
*/