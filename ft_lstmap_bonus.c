/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 00:06:15 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/11 04:32:22 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	*f(void *content)
{
	*(int *)content = *(int *)content - 10;
	return ((int *)content);
}

static void	del(void *content)
{
	free(content);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new_node;

	list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			del(data);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new_node);
		printf("%d\n", *(int *)new_node->content);
		lst = lst->next;
	}
	return (list);
}
/*
int	main()
{
	t_list *head;
	t_list *new;
	t_list *new2;
	t_list *map;

	int *c = (int *)malloc(sizeof(int));
	int *n = (int *)malloc(sizeof(int));
	int *data = (int *)malloc(sizeof(int));

	*c = 55;
	*n = 66;
	*data = 100;

	head = ft_lstnew(c);
	printf("data1:\t%d\n", *(int *)head->content);
	new = ft_lstnew(n);
	printf("data2:\t%d\n", *(int *)new->content);
	new2 = ft_lstnew(data);
	printf("data3:\t%d\n", *(int *)new2->content);

	ft_lstadd_back(&head, new);
	ft_lstadd_back(&head, new2);
	
	map = ft_lstmap(head, f, del);
	
	ft_lstclear(&head, del);
	ft_lstclear(&map, del);
}
*/
