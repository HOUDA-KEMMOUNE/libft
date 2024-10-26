/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:17:05 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/23 12:43:50 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i; //Calculate the len of dst
    size_t b; //calculate the len of src
    size_t j;

    i = 0;
    while (dst[i])
    {
        i++;
    }

    b = 0;
    while (src[b])
    {
        b++;
    }

    if (dstsize == 0 || dstsize == 1)
    {
        return (i + b);
    }

    j = 0;
    while (src[j] && j < dstsize - i - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';

    return (i + b);
}
/*
int main()
{
    char dst[10] = "skibidi";
    const char *src = "fortnite";
    //unsigned int dstsize = sizeof(dst);

    size_t r = ft_strlcat(dst, src, 1);
    printf("The dst is: %s\tthe size of it is: %zu\n", dst, r);
}
*/
