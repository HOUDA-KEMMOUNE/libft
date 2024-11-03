/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:50:22 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 11:37:03 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//standard library header file
//#include <stdio.h>
//user-defined header file
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    const char* s1 = "hihi";
    const char* s2 = "hisi";
    size_t n = 2;
    int r = ft_strncmp(s1, s2, n); //My func
    int r2 = strncmp(s1, s2, n);

    printf("hadi dyali:  %d\n", r);
    printf("hadi l2aslia:  %d\n", r2);
}
*/
