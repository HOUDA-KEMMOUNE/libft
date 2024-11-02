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

char f(unsigned int i, char c)
{
    if (i % 2 == 0)
    {
        return (c - 32);
    }
    else
    {
        return (c + 32);
    }
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}