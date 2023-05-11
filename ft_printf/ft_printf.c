/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:23:00 by TheTerror         #+#    #+#             */
/*   Updated: 2023/03/31 15:16:39 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	ft_swt_type(t_vars *v, va_list args)
{
	if (v->fmt[v->i + 1] == 'c')
		return (ft_op_char(v, (unsigned char) va_arg(args, int)));
	else if (v->fmt[v->i + 1] == 'i' || v->fmt[v->i + 1] == 'd')
		return (ft_op_int(v, va_arg(args, int)));
	else if (v->fmt[v->i + 1] == 'u')
		return (ft_op_unsign(v, va_arg(args, unsigned int)));
	else if (v->fmt[v->i + 1] == 'x')
		return (ft_op_hex(v, va_arg(args, unsigned int), 'x'));
	else if (v->fmt[v->i + 1] == 'X')
		return (ft_op_hex(v, va_arg(args, unsigned int), 'X'));
	else if (v->fmt[v->i + 1] == 's')
		return (ft_op_str(v, va_arg(args, char *)));
	else if (v->fmt[v->i + 1] == 'p')
		return (ft_op_adr(v, va_arg(args, unsigned long long int)));
	else if (v->fmt[v->i + 1] == '%')
	{
		ft_putchar_fd('%', 1);
		v->len++;
		return (__TRUE);
	}
	return (__FALSE);
}

t_bool	ft_op(t_vars *v, va_list args)
{
	t_bool	fdbk;

	fdbk = __TRUE;
	if (v->fmt[v->i] == '%')
	{
		ft_raz_flags(v);
		if (ft_is_optional(v->fmt[v->i + 1]))
			fdbk = ft_checkoptionals(v);
		if (fdbk && ft_istype(v->fmt[v->i + 1]))
			fdbk = ft_swt_type(v, args);
		else
			return (__FALSE);
		v->i++;
	}
	else
		fdbk = ft_print_char(v, v->fmt[v->i]);
	return (fdbk);
}

int	ft_printf(const char *format, ...)
{
	t_vars	*v;
	int		len;
	va_list	args;

	len = 0;
	v = ft_init_var(format);
	va_start(args, format);
	while (v->fmt[v->i])
	{
		if (!ft_op(v, args))
		{
			len = v->len;
			ft_free_var(v);
			return (len);
		}
		v->i++;
	}
	len = v->len;
	ft_free_var(v);
	va_end(args);
	return (len);
}