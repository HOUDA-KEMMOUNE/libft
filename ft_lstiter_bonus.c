/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:44:13 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/10 23:08:12 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	while (ptr != NULL)
	{
		printf("content before:%d\n", *(int *)ptr->content);
		f(ptr->content);
		printf("content after:%d\n\n", *(int *)ptr->content);
		ptr = ptr->next;
	}
}
