/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfaye <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:54:17 by jfaye             #+#    #+#             */
/*   Updated: 2022/11/07 14:00:08 by jfaye            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int ft_strlen(char *str);

int main(int argc, char **argv)
{
    if (argc != 1)
		printf("Longueur: %d", ft_strlen(argv[1]));
	else
		printf("0");
    return (0);
}
