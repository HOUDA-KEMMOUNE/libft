/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:01:27 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/30 06:01:31 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dst_ptr;
    char *src_ptr;
    size_t i;


    if (!src && !dst)
    {
        return (NULL);
    }

    dst_ptr = (char *)dst;
    src_ptr = (char *)src;
    i = 0;

    if (dst_ptr > src_ptr)
    {
        while (len-- > 0)
        {
            dst_ptr[len] = src_ptr[len];
        }
    }
    else
    {
        //ft_memcpy(dst, src, len);
        while (i < len)
        {
            dst_ptr[i] = src_ptr[i];
            i++; 
        }
    }
    return (dst);
}
/*
int main()
{
    char src[] = "Hello world!";
    char dst[50];
    size_t n = ft_strlen(src);

    ft_memmove(dst, src, n + 1);
    printf("%s\n", dst);
}
*/