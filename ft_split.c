/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 08:45:19 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/12 16:24:54 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	if (s[i] == '\0')
		count++;
	return (count);
}

void	ft_free(char **res, int j)
{
	j = 0;
	while (res[j])
	{
		free (res);
		j++;
	}
	free (res);
}

void	fill(const char *str, char c, char **res)
{
	int	start;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		start = i;
		while (str[i] != c && str[i])
			i++;
		res[j] = malloc(sizeof(char) * (i - start + 1));
		if (!res[j])
			ft_free(res, j);
		ft_strlcpy(res[j], str + start, i - start + 1);
		j++;
	}
	res[j] = NULL;
}

char	**ft_split(const char *str, char c)
{
	char	**res;

	res = malloc(sizeof(char *) * (word_count(str, c) + 1));
	if (!str || !res)
		return (NULL);
	fill(str, c, res);
	return (res);
}
