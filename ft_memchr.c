/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:10:31 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 10:29:33 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*data;
	char			character;
	size_t			i;

	data = (unsigned char *)s;
	character = (char)c;
	i = 0;
	while (i < n)
	{
		if (character == data[i])
			return (&data[i]);
		i++;
	}
	if (character == '\0')
		return (&data[i]);
	else
		return (NULL);
}
/*
int main()
{
    char s[] = "salamo3alikom";
    int c = 'i';
    size_t n = 5;

    char *r = ft_memchr(s, c, n);
    if (r) {
        printf("Return: %s\n", r);
    } else {
        printf("Character '%c' not found in the first %zu bytes.\n", c, n);
    }
}
*/
