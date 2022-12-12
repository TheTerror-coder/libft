/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:25:08 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/12 15:02:35 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int		i;
	int					feed;

	i = 0;
	feed = 0;
	while (i < n)
	{
		feed = (unsigned char) s1[i] - (unsigned char) s2[i];
		if (feed != 0)
			return (feed);
		i++;
	}
	return (feed);
}
