/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:23:29 by TheTerror         #+#    #+#             */
/*   Updated: 2023/07/26 14:22:24 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_freesplit(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}

void	ft_free2str(char ***str)
{
	int	i;

	i = 0;
	if (!*str)
		return ;
	while (*str[i])
	{
		free(*str[i]);
		*str[i] = NULL;
		i++;
	}
	free(*str);
	*str = NULL;
}
