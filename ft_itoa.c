/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:45:23 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 22:14:49 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int	x;
	int	count;

	x = n;
	count = 1;
	while (x >= 10)
	{
		x = x / 10;
		count++;
	}
	printf("%d\n", count);
	char *str = "test";
	return (str);
}

int	main()
{
	int n = 1337;
	char *r = ft_itoa(n);
	printf("%s\n", r);
}
