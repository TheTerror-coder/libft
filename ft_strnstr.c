/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:58:18 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/24 23:38:13 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *s1, const char *s2, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	if (!s2[i])
		return ((char *) s1);
	while (i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			k = i;
			while (i < len && (s1[i] == s2[j]), i++)
			{
				j++;
				if (s2[j] == '\0')
					return ((char *) &s1[k]);
			}
		}
		else
			i++;
	}
	return (0);
}
