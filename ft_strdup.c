/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:20:16 by TheTerror         #+#    #+#             */
/*   Updated: 2023/05/08 20:09:36 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*s_dup;

	len = 0;
	while (s[len])
		len++;
	s_dup = malloc(sizeof(char) * (len + 1));
	if (!s_dup)
		return (0);
	len = 0;
	while (s[len])
	{
		s_dup[len] = s[len];
		len++;
	}
	s_dup[len] = 0;
	return (s_dup);
}
