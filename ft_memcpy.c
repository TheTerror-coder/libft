/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:19:30 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/10 16:32:07 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	const char		*psrc;
	char			*pdest;

	i = 0;
	psrc = src;
	pdest = dest;
	while (i < n)
	{
		*(pdest + i) = *(psrc + i);
		i++;
	}
	return ((void *) dest);
}
