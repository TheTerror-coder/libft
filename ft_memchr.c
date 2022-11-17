/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:52:59 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/15 21:52:59 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	const char		*p;
	unsigned int	i;

	i = 0;
	p = s;
	while ((i < n) && p[i])
	{
		if (p[i] == c)
			return ((void *) &p[i]);
		i++;
	}
	return (0);
}
