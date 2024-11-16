/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:57:45 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/16 19:59:07 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0)
	{
		size_t	i;

		i = 0;
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
	return ;
}
