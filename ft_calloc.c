/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:31:41 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/28 08:31:44 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;
    size_t i;

    ptr = malloc(count * size);

    i = 0;
    while (i < count)
    {
        *(ptr + i) = 0;
        i++;
    }
    return (ptr);
}
/*
int main()
{
    size_t count = 5;
    size_t size = sizeof(int);
    size_t i = 0;
    int *ptr;

    ptr = (int *)ft_calloc(count, size);

    while (i < count)
    {
        printf("%d", ptr[i]);
        i++;
    }
    printf("\n");
}
*/