/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:52:59 by TheTerror         #+#    #+#             */
/*   Updated: 2023/01/04 16:09:39 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	const char		*p;
	unsigned int	i;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (char) c)
			return ((void *) &p[i]);
		i++;
	}
	return (0);
}
