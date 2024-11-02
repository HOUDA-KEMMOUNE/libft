/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:13:14 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/02 11:13:18 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    f(unsigned int i, char *c)
{
    while (c[i])
    {
        if (i % 2 == 0 && (c[i] >= 97 && c[i] <= 122))
        {
            c[i] = c[i] - 32;
        }
        else if (i % 2 == 1 && (c >= 65 && c <= 90))
        {
            c[i] = c[i] + 32;
        }
        i++;
    }
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    size_t len;
    char *ptr;

    i = 0;
    len = ft_strlen(s);
}