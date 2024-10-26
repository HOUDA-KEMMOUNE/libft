/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:54:17 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/10/24 10:54:19 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    if (str[i] == '+')
    {
        sign = 1;
        i++;
    }
    else if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }

    return (result * sign);
}
/*
int main()
{
    const char *str = "       +12345av34";
    int r = ft_atoi(str);
    int r2 = atoi(str);

    printf("%d\n", r);
    printf("%d\n", r2);
}
*/