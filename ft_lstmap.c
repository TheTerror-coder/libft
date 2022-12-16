/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:55:50 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/16 19:49:33 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elm;
	t_list	*nwlst;

	if (!lst)
		return (NULL);
	while (lst)
	{
		elm = ft_lstnew(f(lst->content));
		if (!elm)
		{
			ft_lstclear(&(elm->next), del);
			return (NULL);
		}
		ft_lstadd_back(&nwlst, elm);
		lst = lst->next;
	}
	return (nwlst);
}
