/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:23:24 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/02 10:23:26 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  char    f(unsigned int i, char c)
{
    if (i % 2 == 0 && (c >= 97 && c <= 122))
    {
        return (c - 32);
    }
    else if (i % 2 == 1 && (c >= 65 && c <= 90))
    {
        return (c + 32);
    }
    return (c);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *ptr_s;
    unsigned int i;
    char *ptr;
    size_t len;

    ptr_s = (char *)s;
    i = 0;
    len = ft_strlen(ptr_s);
    ptr = malloc((len + 1) * sizeof(char));

    if (!s || !f || !ptr)
    {
        return (NULL);
    }

    while (ptr_s[i])
    {
        ptr[i] = f(i, ptr_s[i]);
        i++;
    }
    ptr[i] = '\0';
    
    return (ptr);
}
/*
int main()
{
    const char *s = "769hb";
    char *r = ft_strmapi(s, f);

    printf("%s\n", r);
    free(r);
}
*/