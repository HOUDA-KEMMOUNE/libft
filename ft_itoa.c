/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:45:23 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/04 17:00:44 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mini_putnbr(int n, char *ptr, int i)
{
	if (n > 9)
	{
		i = mini_putnbr(n / 10, ptr, i);
	}
	ptr[i] = (n % 10) + '0';
	i++;
	return (i);
}

char *ft_itoa(int n)
{
	int	x;
	int	count;
	int	i;
	char	*ptr;
	char	*str_INT_MIN;

	x = n;
	count = 1;
	i = 0;
	if (x < 0)
	{
		x = -1 * x;
		count++;
	}
	while (x >= 10)
	{
		x = x / 10;
		count++;
	}
	ptr = malloc((count + 1) * sizeof(char));
	if (n < 0)
	{
		n = -1 * n;
		ptr[i] = '-';
		i++;
	}
	if (n > 0)
	{
		i = mini_putnbr(n, ptr, i);
		ptr[i] = '\0';
	}
	str_INT_MIN = "-2147483648";
 	if (n == INT_MIN)
	{
		while(str_INT_MIN[i])
		{
			ptr[i] = str_INT_MIN[i];
			i++;
		}
	}
	return (ptr);
}
/*
int	main()
{
	int n = -1337;
	char *r = ft_itoa(n);
	printf("%s\n", r);
	free (r);
}
*/
