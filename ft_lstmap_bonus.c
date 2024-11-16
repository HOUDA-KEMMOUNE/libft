/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 00:06:15 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/16 08:15:25 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*first;

	list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	first = ft_lstnew(f(lst->content));
	if (!first)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		list = ft_lstnew(f(lst->content));
		if (!list)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&first, list);
		lst = lst->next;
	}
	return (first);
}
