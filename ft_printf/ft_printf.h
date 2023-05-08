/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:07:01 by TheTerror         #+#    #+#             */
/*   Updated: 2023/05/08 20:36:20 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_preprcss.h"
# include "libft00/libft00.h"
# include "./srcs/ft_srcs.h"
# include "./utils/ft_utils.h"
# include "./bonus/ft_bonus.h"

int		ft_printf(const char *format, ...);

#endif