/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:15:28 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/15 17:11:04 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void			*arr;
	char			*p;
	unsigned int	i;

	i = 0;
	arr = malloc(nmemb * size);
	p = arr;
	if (!p)
		return (0);
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (arr);
}
