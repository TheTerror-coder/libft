/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:55:50 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/16 13:46:57 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

t_list	*ft_add_el(t_list *inter, void *cont)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list = NULL;
	list->content = cont;
	list->next = inter;
	return (list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*inter;

	inter = NULL;
	while (lst->next != NULL)
	{
		inter = ft_add_el(inter, f(lst->content));
		if (!inter)
			ft_lstclear(&inter->next, del);
		lst = lst->next;
	}
	return (inter);
}
