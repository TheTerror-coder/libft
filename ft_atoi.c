/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:11:50 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/17 21:11:50 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *ptr)
{
	unsigned int	i;
	int				sign;
	int				fdb;

	i = 0;
	fdb = 0;
	sign = 1;
	while (ptr[i] == ' ' || ptr[i] >= 9 && ptr[i] <= 13)
		i++;
	if (ptr[i] == '+')
		i++;
	else if (ptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ptr[i] > '0' && ptr[i] < '9')
	{
		fdb *= 10;
		fdb += (ptr[i] - 48);
		i++;
	}
	return (fdb * sign);
}
