/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:11:50 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/24 17:55:45 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	int				fdb;

	i = 0;
	fdb = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] > '0' && nptr[i] < '9')
	{
		fdb *= 10;
		fdb += (nptr[i] - 48);
		i++;
	}
	return (fdb * sign);
}
