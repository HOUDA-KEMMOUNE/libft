/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:27:35 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 12:05:26 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*str;
	char	*ptr;

	s_len = ft_strlen(s);
	str = (char *)s;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	i = 0;
	while (i < len)
	{
		ptr[i] = str[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}