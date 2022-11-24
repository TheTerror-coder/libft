/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:47:39 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/24 18:26:56 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_set_len(int n)
{
	int	div;
	int	len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	div = n / 10;
	while (div != 0)
	{
		div /= 10;
		len++;
	}
	return (len);
}

void	ft_fill(char *str, int n, int len)
{
	int	div;
	int	mod;

	mod = n % 10;
	div = n / 10;
	str[len] = 0;
	while (div != 0 && len > 0)
	{
		len--;
		str[len] = mod + 48;
		mod = div % 10;
		div /= 10;
	}
	if (len > 0)
	{
		len--;
		str[len] = mod + 48;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_set_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			str = "-2147483648";
			return (str);
		}
		str[0] = '-';
		n *= -1;
	}
	ft_fill(str, n, len);
	return (str);
}
