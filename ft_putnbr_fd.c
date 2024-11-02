/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:51:57 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/02 08:52:02 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd((n % 10) + '0', fd);

    }
    else if (n == INT_MIN)
    {
        write(fd, "-2147483648", 11);
    }
    else if (n < 0)
    {
        write(fd, "-", 1);
        n = n * -1;
        ft_putnbr_fd(n, fd);
    }
    else
    {
        ft_putchar_fd(n + '0', fd);
    }
}
/*
int main()
{
    int n = -1337;
    int fd = 1;
    ft_putnbr_fd(n, fd);
    ft_putchar_fd('\n', fd);
}
*/