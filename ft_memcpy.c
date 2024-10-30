/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:20:50 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/29 09:20:54 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *ptr_src;
    unsigned char *ptr_dst;
    size_t i;
    //size_t j;

    ptr_src = (unsigned char *)src;
    ptr_dst = (unsigned char *)dst;

    i = 0;
    while (i < n)
    {
        //*(ptr_dst + i) = *(ptr_src + i);
        ptr_dst[i] = ptr_src[i];
        i++;
    }

    return (ptr_dst);
}
/*
int main()
{
    int src[5] = {1, 2, 3, 4, 5};
    int dst[5];
    size_t j = 0;
    size_t n = sizeof(src);

    ft_memcpy(dst, src, n);

    while (j < 5)
    {
        printf("dest[%ld] = %d\n", j, dst[j]);
        j++;
    }
}
*/