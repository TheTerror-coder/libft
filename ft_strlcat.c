/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:44:11 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/12 14:01:14 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat( char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	lndst;
	unsigned int	lnsrc;
	unsigned int	i;
	unsigned int	j;

	lndst = 0;
	lnsrc = 0;
	j = 0;
	while (dst[lndst] != 0)
		lndst++;
	while (src[lnsrc] != 0)
		lnsrc++;
	if (dstsize <= lndst)
		return (lnsrc + dstsize);
	i = lndst;
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lnsrc + lndst);
}
