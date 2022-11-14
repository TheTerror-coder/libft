/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:27:19 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/13 23:27:19 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	const char		*psrc;
	char			*pdest;
	char			tmp[n];

	i = 0;
	psrc = src;
	pdest = dest;
	while (i < n)
	{
		tmp[i] = *(psrc + i);
		i++;
	}
	while (i > 0, i--)
		*(pdest + i) = tmp[i];
	return ((void *) dest);
}
