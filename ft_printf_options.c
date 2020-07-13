/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 14:02:12 by jason             #+#    #+#             */
/*   Updated: 2020/07/13 16:22:43 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(char c)
{
	ft_putchar_fd(1, c);
}

void	ft_printf_s(char *s, va_list ap)
{
	ft_putstr_fd(1, s);
}

void	ft_printf_p(void *p, va_list ap)
{
	ft_putstr_fd(1, ft_pvalue(p));
}

void	ft_printf_d(int d, va_list ap)
{
	ft_putstr_fd(1, ft_itoa(d));
}

void	ft_printf_i(int i, va_list ap)
{
	ft_putstr_fd(1, ft_itoa(i));
}

void	ft_printf_u(unsigned u, va_list ap)
{
	ft_putstr_fd(1, ft_utoa(u));
}

void	ft_printf_x(unsigned x, va_list ap)
{
	ft_putstr_fd(1, ft_base(x));
}

void	ft_printf_X(unsigned X, va_list ap)
{
	ft_putstr_fd(1, ft_Base(X));
}
