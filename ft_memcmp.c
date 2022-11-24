/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:09:21 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/24 22:43:06 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const char		*p1;
	const char		*p2;
	unsigned int	i;
	int				diff;

	p1 = s1;
	p2 = s2;
	i = 0;
	diff = 0;
	while (i < n && diff == 0)
	{
		diff = p1[i] - p2[i];
		i++;
	}
	return (diff);
}
