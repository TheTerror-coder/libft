/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:43:18 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/12 17:39:34 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

int	ft_is_in_set(const char *set, char c)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen(s1);
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	len = 0;
	while (ft_is_in_set(set, s1[i]) != 0)
		i++;
	while (s1[i])
	{
		str[len] = s1[i];
		len++;
		i++;
	}
	str[len] = '\0';
	len--;
	while (ft_is_in_set(set, str[len--]) != 0)
		str[len] = '\0';
	return (str);
}
