/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:54:49 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/15 19:57:24 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst != NULL)
	{
		del((*lst)->content);
		if (((*lst)->next) != NULL)
			ft_lstclear(&((*lst)->next), del);
	}
	free(*lst);
	*lst = NULL;
}
