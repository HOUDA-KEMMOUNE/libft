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

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{

}