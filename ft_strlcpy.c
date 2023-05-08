/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:27:14 by TheTerror         #+#    #+#             */
/*   Updated: 2023/05/08 20:09:36 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	lnsrc;
	unsigned int	i;

	lnsrc = 0;
	i = 0;
	while (src[lnsrc])
		lnsrc++;
	if (!src || size < 1)
		return (lnsrc);
	while ((i < size - 1) && (i < lnsrc))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lnsrc);
}
