/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:45:23 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/08 17:13:51 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mini_putnbr(int n, char *ptr, int i)
{
	if (n > 9)
	{
		i = mini_putnbr(n / 10, ptr, i);
	}
	ptr[i] = (n % 10) + '0';
	i++;
	return (i);
}

static void	mini_int(char *str, char *ptr)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
}

static int	count_fun(int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	int		i;
	char	*ptr;

	i = 0;
	count = count_fun(n);
	ptr = (char *)malloc((count + 1) * sizeof(char));
	if (n == -2147483648)
		mini_int("-2147483648", ptr);
	if (n < 0)
	{
		n = -1 * n;
		ptr[i] = '-';
		i++;
	}
	if (n >= 0)
	{
		i = mini_putnbr(n, ptr, i);
		ptr[i] = '\0';
	}
	return (ptr);
}
