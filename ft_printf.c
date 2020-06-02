/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 11:41:22 by jason             #+#    #+#             */
/*   Updated: 2020/06/02 15:02:32 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, char	c, char *s, int d, int i, unsigned u, unsigned x, unsigned X)
{
	char	*dst;
	int	idx;

	idx = 0;
	dst = (char *)str;
	while (dst[idx] != '\0')
	{
		if (dst[idx] == '%')
		{
			idx++;
			if (dst[idx] == 'c')
				ft_printf_c(c);
			else if (dst[idx] == 's')
				ft_printf_s(s);
			else if (dst[idx] == 'p')
				;
			else if (dst[idx] == 'd')
				ft_printf_d(d);
			else if (dst[idx] == 'i')
				ft_printf_d(i);
			else if (dst[idx] == 'u')
				ft_printf_u(u);
			else if (dst[idx] == 'x')
				ft_printf_x(x);
			else if (dst[idx] == 'X')
				ft_printf_X(X);
			else
				return (-1);
		}
		else
			ft_putchar_fd(1, dst[idx]);
		idx++;
	}
	return (0);
}

int	main(void)
{
	char	c;
	char	*s;
	char	*ss[3];
	int	d;
	int	i;
	unsigned	u;
	int	x;

	c = 'a';
	s = "안녕하세요";
	ss[0] = "aa";
	ss[1] = "bb";
	d = 456;
	i = 789;
	u = -2;
	x = 1118;

	   printf("123%c%s%d%i\n%u\n%x%X끝\n", c, s, d, i, u, x, x);

	ft_printf("123%c%s%d%i\n%u\n%x%X끝\n", c, s, d, i, u, x, x);

	return (0);
}
