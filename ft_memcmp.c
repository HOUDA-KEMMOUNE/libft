/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:17:51 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 10:32:08 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    int data1[] = {1, 2, 3, 4, 5, 56};
    int data2[] = {1, 2, 3, 4, 5, 6};
    size_t n = 4 * sizeof(int);
    int r = ft_memcmp(data1, data2, n);
    int r2 = memcmp(data1, data2, n);

    printf("%d\n", r);
    printf("%d\n", r2);
}
*/
