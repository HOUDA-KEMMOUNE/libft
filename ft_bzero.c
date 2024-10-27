/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:17:20 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/26 17:17:36 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        *ptr = 0;
        ptr++;
        i++;
    }
}

/*
int main()
{
    size_t len = 10;
    char buffer[10];
    size_t i = 0;

    ft_bzero(buffer, len);

    while (i < len)
    {
        printf("%d", buffer[i]);
        i++;
    }
    printf("\n");
}
*/