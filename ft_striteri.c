/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:13:14 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/07 13:24:33 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	f(unsigned int i, char *c)
// {
// 		if (i % 2 == 0 && (c[i] >= 97 && c[i] <= 122))
// 			c[i] = c[i] - 32;
// 		else if (i % 2 == 1 && (c[i] >= 65 && c[i] <= 90))
// 			c[i] = c[i] + 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
