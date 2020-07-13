/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 11:38:44 by jason             #+#    #+#             */
/*   Updated: 2020/07/13 15:45:35 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# include <stdio.h>

int		ft_printf(const char *str, ...);

void		ft_putchar_fd(int fd, char c);
void		ft_putstr_fd(int fd, char *s);
char		*ft_pvalue(void *p);
char		*ft_itoa(int n);
char		*ft_utoa(unsigned u);
char		*ft_base(unsigned x);
char		*ft_Base(unsigned X);

void	ft_printf_c(char c);
void	ft_printf_s(char *s);
void	ft_printf_p(void *p);
void	ft_printf_d(int d);
void	ft_printf_i(int i);
void	ft_printf_u(unsigned u);
void	ft_printf_x(unsigned x);
void	ft_printf_X(unsigned X);

#endif
