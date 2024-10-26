/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:09:34 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/23 12:45:58 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i; //for the length of src
    size_t j;

    j = 0;
    while (src[j] && j < dstsize - 1)
    {
        dst[j] = src[j];
        j++;
    }   
    dst[j] = '\0';

    i = 0;
    while (src[i])
    {
        i++;
    }
    
    //printf("%s\n", dst);
    return (i); 
}
/*
int main() 
{
  const char *src = "skibidibidi";
  char dest[1];
  size_t dstsize = sizeof(dest);
  size_t r = ft_strlcpy(dest, src, dstsize);

  printf("dest is: %s\tlength of src: %zu\n", dest, r);
}
*/
