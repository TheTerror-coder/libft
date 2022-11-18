/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:20:16 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/18 14:20:16 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*str;

	len = 0;
	while (s[len])
		len++;
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (0);
	len = 0;
	while (s[len])
	{
		str[len] = s[len];
		len++;
	}
	str[len] = 0;
	return (str);
}
