/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 11:41:22 by jason             #+#    #+#             */
/*   Updated: 2020/07/13 16:22:40 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *types, ...)
{
	va_list	ap;
	va_list copy;
	int	idx;

	va_start(ap, types);
	va_copy(ap, copy);
	while (types[idx] != '\0')
	{
		if (types[idx] == '%')
		{
			idx++;
			if (types[idx] == 'c')
				ft_printf_c(va_arg(ap, char));
			else if (types[idx] == 's')
				va_arg(ap, char *);
			else if (types[idx] == 'p')
				va_arg(ap, void *)
			else if (types[idx] == 'd')
				va_arg(ap, int)
			else if (types[idx] == 'i')
				va_arg(ap, int);
			else if (types[idx] == 'u')
				va_arg(ap, unsigned int);
			else if (types[idx] == 'x')
				va_arg(ap, unsigned int);
			else if (types[idx] == 'X')
				va_arg(ap, unsigned int);
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

int	main(void)
{
	char	c;
	char	*s;
	int	*p;
	int	d;
	int	i;
	unsigned	u;
	int	x;

	void	*w = 0;

	c = '^';
	s = "0";
	p = 0;
	d = 456;
	i = 789;
	u = 65538752;
	x = 1118;

	   printf("\n123%c %s\n%p\n%d %i\n%u\n%x %X끝\n", c, s, w, d, i, u, x, x);

	ft_printf("\n123%c %s\n%p\n%d %i\n%u\n%x %X끝\n", c, s, p, d, i, u, x, x);

	return (0);
}
