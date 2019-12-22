/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:21:19 by bhugo             #+#    #+#             */
/*   Updated: 2019/12/22 18:44:07 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

void	print_float(char *s, t_printf *p)
{
	if (ft_isdigit(s[1]) == 0)
		print_str(s, p);
	else
		print_int(s, p);
}

int		format_float(t_printf *p)
{
	long double	n;
	double		f;
	static char float2str[1076];
	static char long2str[16447];

	if (p->length_capital_l == 1)
	{
		n = va_arg(p->arg_ptr, long double);
		long_double_trouble(&n, p->precision, long2str);
		print_float(long2str, p);
	}
	else
	{
		f = va_arg(p->arg_ptr, double);
		double_trouble(&f, p->precision, float2str);
		print_float(float2str, p);
	}
	return (1);
}
