/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:17:05 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 11:22:10 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	j;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || dstsize == 1)
		return (dest_len + src_len);
	j = 0;
	while (src[j] && j < dstsize - dest_len - 1)
	{
		dst[dest_len + src_len] = src[j];
		j++;
	}
	dst[dest_len + src_len] = '\0';
	return (dest_len + src_len);
}
