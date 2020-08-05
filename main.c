/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 15:09:34 by jason             #+#    #+#             */
/*   Updated: 2020/08/05 15:45:14 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	c;
	char	*s;
	int	*p;
	int	idx;
	int	i;
	unsigned	u;
	int	x;

	void	*w = 0;

	c = '1';
	s = "23";
	p = 0;
	idx = 567;
	i = 8910;
	u = 65538752;
	x = 1004;

//	   printf("\n123\n%c %s\n%p\n%d %i\n%u\n%x %X끝\n", c, s, w, d, i, u, x, x);

//	ft_printf("\n123\n%c %s\n%p\n%d %i\n%u\n%x %X끝\n", c, s, p, d, i, u, x, x);

	ft_printf("i");

	return (0);
}

