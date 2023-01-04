/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:37:45 by TheTerror         #+#    #+#             */
/*   Updated: 2023/01/04 16:21:24 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 0 && c <= 255)
	{
		if (c > 47 && c < 58)
			return (1);
		if (c > 64 && c < 91)
			return (1);
		if (c > 96 && c < 123)
			return (1);
	}
	return (0);
}
