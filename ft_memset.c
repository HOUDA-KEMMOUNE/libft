/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:51:00 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 10:40:47 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*ptr = (unsigned char)c;
		i++;
		ptr++;
	}
	return (b);
}
/*
int main()
{
    char buffer[10];
    size_t i;
    size_t len;
    int c;

    c = 5;
    len = sizeof(buffer);
    ft_memset(buffer, c, len);

    i = 0;
    while (i < len)
    {
        printf("%d ", buffer[i]);
        i++;
    }
    printf("\n");
}
*/
