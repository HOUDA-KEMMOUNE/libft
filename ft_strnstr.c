/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:57:50 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/25 07:57:52 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if (needle[j] == '\0')
    {
        return ((char *)&haystack[i]);
    }

    while (haystack[i] && i < len - 1)
    {
        while (needle[j] == haystack[i + j])
        {
            j++;
            if (needle[j] == '\0')
            {
                return ((char *)&haystack[i]);
            }
        }
        j = 0;
        i++;
    }
    return (NULL);
}
/*
int main()
{
    const char *str = "skibidi fortnite";
    const char *search = "btata";
    size_t len = 2;
    
    char *r = ft_strnstr(str, search, len);
    printf ("%s\n", r);
}
*/