/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:54:41 by TheTerror         #+#    #+#             */
/*   Updated: 2023/01/05 16:08:05 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include<stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# define RES_BUFFER -999
# define SET_BUFFER -998

# define __ERROR -1
# define __READY -111
# define __N_T_R -100//Nothing To Report

# define __A_LEFTOVER -1111
# define __NO_LEFTOVER -1110

char	*ft_lloc(int len);
int		ft_size(char *str);
int		ft_append(char *line, char *buf, int end_buf);
int		ft_check_endl(char *str);
char	*get_next_line(int fd);

#endif