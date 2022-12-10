/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:20:19 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/10 16:56:01 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*ss;
	unsigned int	i;
	unsigned int	ss_len;

	i = start;
	ss_len = 0;
	while (s[i])
	{
		i++;
		ss_len++;
	}
	if (ss_len > len)
		ss_len = len;
	ss = malloc(sizeof(char *) * (ss_len + 1));
	if (!ss)
		return (0);
	i = 0;
	while (i < ss_len)
	{
		ss[i] = s[start];
		i++;
		start++;
	}
	ss[i] = '\0';
	return (ss);
}
