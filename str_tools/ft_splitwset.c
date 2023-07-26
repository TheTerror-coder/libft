/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitwset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:25:51 by TheTerror         #+#    #+#             */
/*   Updated: 2023/07/26 15:31:56 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned int	ft_count_row(const char *s, char *set)
{
	unsigned int	i;
	unsigned int	nbrow;

	i = 0;
	nbrow = 0;
	while (s[i])
	{
		while (ft_strchr(set, s[i]))
			i++;
		if (s[i])
		{
			while (s[i] != 0 && !ft_strchr(set, s[i]))
				i++;
			nbrow++;
		}
	}
	return (nbrow);
}

unsigned int	ft_count_col(const char *s, char *set)
{
	unsigned int	i;

	i = 0;
	while ((s[i] != 0) && (!ft_strchr(set, s[i])))
		i++;
	return (i);
}

void	ft_free(char **arr, unsigned int ix)
{
	while (ix > 0)
	{
		free(arr[ix]);
		ix--;
	}
	free(arr[ix]);
	free(arr);
}

int	ft_fill(char const *s, char **sstr, char *set)
{
	unsigned int	i;
	unsigned int	ix;
	unsigned int	len;

	i = 0;
	ix = 0;
	while (s[i])
	{
		while (ft_strchr(set, s[i]))
			i++;
		len = ft_count_col(&s[i], set);
		if (s[i])
		{
			sstr[ix] = ft_substr(s, i, len);
			if (!sstr[ix])
			{
				ft_free(sstr, ix);
				return (0);
			}	
			ix++;
		}
		i = len + i;
	}
	sstr[ix] = 0;
	return (55);
}

char	**ft_splitwset(char const *s, char *set)
{
	unsigned int	len;
	char			**sstr;

	len = ft_count_row(s, set);
	sstr = malloc(sizeof(char *) * (len + 1));
	if (!sstr)
		return (NULL);
	if (!ft_fill(s, sstr, set))
		return (0);
	return (sstr);
}