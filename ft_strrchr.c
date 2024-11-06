/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:22:29 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 11:48:07 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	e;
	size_t	b;
	size_t	b2;

	len = ft_strlen(s);
	b = 0;
	e = len;
	while (s[e] != s[0])
	{
		if (s[e] == (char)c)
		{
			b = e;
			b2 = 0;
			while (s[b + b2])
				b2++;
			return ((char *)&s[b]);
		}
		e--;
	}
	if ((char)c == s[0])
		return ((char *)&s[e]);
	return (NULL);
}