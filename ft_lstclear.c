/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:54:49 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/19 15:02:54 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	ft_freelst(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	if ((lst->next) != NULL)
		ft_freelst(lst->next, del);
	else
		free(lst->next);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst != NULL)
		ft_freelst(*lst, del);
	else
		free(*lst);
	*lst = NULL;
}
