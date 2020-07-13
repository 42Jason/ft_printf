/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:23:30 by jason             #+#    #+#             */
/*   Updated: 2020/07/13 18:07:44 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *, ...)
{
	va_list	ap;
	va_list	copy;
	int	idx;

	va_start(ap, );
	va_copy(copy, ap);
}

int	main(void)
{
	char a;

	ft_printf("%c", a);
	return (0);
}
