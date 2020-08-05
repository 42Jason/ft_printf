/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 11:41:22 by jason             #+#    #+#             */
/*   Updated: 2020/08/05 15:45:12 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_specifier(const char *types, ...)
{
	
}

int	ft_printf(const char *types, ...)
{
	va_list	ap;
	int	idx;

	va_start(ap, types);
	idx = 0;
	while (types[idx] != '\0')
	{
		if (types[idx] == '%')
		{
			idx++;
			if (types[idx] == '.')
			
			if (types[idx] == 'c')
				ft_printf_c(va_arg(ap, int));
			else if (types[idx] == 's')
				ft_printf_s(va_arg(ap, char *));
			else if (types[idx] == 'p')
				ft_printf_p(va_arg(ap, void *));
			else if (types[idx] == 'd')
				ft_printf_d(va_arg(ap, int));
			else if (types[idx] == 'i')
				ft_printf_i(va_arg(ap, int));
			else if (types[idx] == 'u')
				ft_printf_u(va_arg(ap, unsigned int));
			else if (types[idx] == 'x')
				ft_printf_x(va_arg(ap, unsigned int));
			else if (types[idx] == 'X')
				ft_printf_X(va_arg(ap, unsigned int));
			else
				return (-1);
		}
		else
			ft_putchar_fd(1, types[idx]);
		idx++;
	}
	va_end(ap);
	return (0);
}
