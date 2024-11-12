/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 08:45:19 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/12 08:56:58 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	if (s[i] == '\0')
		count++;
	return (count);
}
/*
char	**ft_split(const char *s, char c)
{

}
*/


int main()
{
	const char *s = "haha, hoho, hihi";
	char c = ',';
	
	int count = word_count(s, c);
	printf("Count of s:\t%d\n", count);
}
