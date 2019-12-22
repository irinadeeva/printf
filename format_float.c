/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:21:19 by bhugo             #+#    #+#             */
/*   Updated: 2019/12/22 21:18:50 by bhugo            ###   ########.fr       */
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
	char 		*float2str;
	char 		*long2str;

	p->precision < 0 || p->precision > LON_LEN ? p->precision = DEF_PRE : 0;
	if (p->length_capital_l == 1)
	{
		n = va_arg(p->arg_ptr, long double);
		if(!(long2str = (char*)malloc(sizeof(char) * (LON_LEN))))
			exit(-1);
		long_double_trouble(&n, p->precision, long2str);
		print_float(long2str, p);
	}
	else
	{
		f = va_arg(p->arg_ptr, double);
		if(!(float2str = (char*)malloc(sizeof(char) * (DUB_LEN))))
			exit(-1);
		double_trouble(&f, p->precision, float2str);
		print_float(float2str, p);
	}
	return (1);
}
