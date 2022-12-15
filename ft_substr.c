/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:20:19 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/15 19:00:22 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*ss;
	unsigned int	i;
	unsigned int	ss_len;

	i = ft_strlen(s);
	if (i == 0)
		return ((char *) ft_calloc(1, 1));
	if (len == 0 || start > i)
		return ((char *) ft_calloc(1, 1));
	ss_len = ft_strlen(&s[start]);
	if (ss_len > len)
		ss_len = len;
	ss = malloc(sizeof(char) * (ss_len + 1));
	if (!ss)
		return ((char *) NULL);
	ft_strlcpy(ss, &s[start], ss_len + 1);
	return (ss);
}
