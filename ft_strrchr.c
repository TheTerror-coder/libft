/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:04:55 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/12 14:17:52 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char		*p;
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			p = &s[i];
		i++;
	}
	if (s[i] == c)
		p = &s[i];
	return ((char *) p);
}
