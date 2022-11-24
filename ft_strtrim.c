/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:43:18 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/24 23:38:08 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

int	ft_strlen(const char *s, unsigned int op)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (op != 0)
	{
		if (i > 0)
			i--;
		while (!ft_isalnum(s[i]))
			i--;
	}
	return (i);
}

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

int	ft_fill(char *str, const char *s1, const char *set, int *len)
{
	int	i;

	i = 0;
	while (!ft_isalnum(s1[i]))
	{
		if (!ft_is_in_set(set, s1[i]))
		{
			str[*len] = s1[i];
			*len = *len + 1;
		}
		i++;
	}
	str[*len] = 0;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		k;
	char	*str;

	i = 0;
	len = ft_strlen(s1, 0);
	k = ft_strlen(s1, 1);
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (0);
	len = 0;
	i = ft_fill(str, s1, set, &len);
	while (i <= k)
	{
		str[len] = s1[i];
		len++;
		i++;
	}
	i = ft_fill(str, &s1[i], set, &len);
	return (str);
}
