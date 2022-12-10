/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:35:39 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/05 13:35:39 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__LIBFT_H__
#define	__LIBFT_H__

typedef struct s_list t_list;

struct s_list
{
	void	*content;
	t_list	*next;
};

#endif