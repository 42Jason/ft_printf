/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 14:02:12 by jason             #+#    #+#             */
/*   Updated: 2020/07/14 15:02:05 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(char c)
{
	ft_putchar_fd(1, c);
}

void	ft_printf_s(char *s)
{
	ft_putstr_fd(1, s);
}

void	ft_printf_p(void *p)
{
	ft_putstr_fd(1, ft_pvalue(p));
}

void	ft_printf_d(int d)
{
	ft_putstr_fd(1, ft_itoa(d));
}

void	ft_printf_i(int i)
{
	ft_putstr_fd(1, ft_itoa(i));
}

void	ft_printf_u(unsigned int u)
{
	ft_putstr_fd(1, ft_utoa(u));
}

void	ft_printf_x(unsigned int x)
{
	ft_putstr_fd(1, ft_base(x));
}

void	ft_printf_X(unsigned int X)
{
	ft_putstr_fd(1, ft_Base(X));
}
