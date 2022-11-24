/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:27:19 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/24 22:56:52 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	const char		*psrc;
	char			*pdest;

	psrc = src;
	pdest = dest;
	if (pdest < psrc)
	{
		i = 0;
		while (i < n)
		{
			*(pdest + i) = *(psrc + i);
			i++;
		}
	}
	else if (pdest > psrc)
	{
		while (n > 0)
		{
			n--;
			*(pdest + n) = *(psrc + n);
		}
	}
	return ((void *) dest);
}
