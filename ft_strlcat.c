/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:44:11 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/10 17:39:34 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat( char *dst, const char *src, unsigned int size)
{
	unsigned int	lndst;
	unsigned int	lnsrc;
	unsigned int	i;
	unsigned int	j;

	lndst = 0;
	lnsrc = 0;
	j = 0;
	while (dst[lndst])
		lndst++;
	while (src[lnsrc])
		lnsrc++;
	if (size <= lndst)
		return (lnsrc + lndst);
	i = lndst;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lnsrc + lndst);
}
