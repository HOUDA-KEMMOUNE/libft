/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:57:45 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/01 15:57:47 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t i;
    
    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
/*
int main()
{
    char *s = "gdshjdsfgsdfg";
    int fd = 1;
    ft_putstr_fd(s, fd);
    printf("\n");
}
*/