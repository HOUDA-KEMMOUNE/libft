/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:31:41 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/08 17:22:37 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)malloc(count * size);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < count * size)
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
