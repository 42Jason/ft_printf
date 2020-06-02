/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jason <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 11:49:56 by jason             #+#    #+#             */
/*   Updated: 2020/06/02 14:44:47 by jason            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(int fd, char *s)
{
	int	idx;

	if (!s)
		return ;
	idx = 0;
	while (s[idx] != '\0')
	{
		ft_putchar_fd(fd, s[idx]);
		idx++;
	}
}

int		ft_nbr(int n)
{
	unsigned int	nbr;

	if (n < 0)
		nbr = (size_t)(n * -1);
	else
		nbr = (size_t)n;
	return (nbr);
}

int		ft_nbrlen(size_t nbr)
{
	unsigned int	len;

	len = 1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*dst;
	unsigned int	idx;
	unsigned int	nbr;
	unsigned int	len;

	nbr = ft_nbr(n);
	len = ft_nbrlen(nbr);
	if (!(dst = (char *)malloc(sizeof(char) * len + 1 + (n < 0 ? 1 : 0))))
		return (NULL);
	idx = 0;
	if (n < 0 && (dst[idx] = '-'))
		len++;
	idx = len - 1;
	while (nbr >= 10)
	{
		dst[idx--] = (char)(nbr % 10 + 48);
		nbr = nbr / 10;
	}
	dst[idx] = (char)(nbr % 10 + 48);
	dst[len] = '\0';
	return (dst);
}

unsigned	ft_ubr(unsigned u)
{
	unsigned	nbr;

	if (u >= 0)
		nbr = u;
	else
		nbr = UINT_MAX - u;
	return (nbr);
}

char	*ft_utoa(unsigned u)
{
	char			*dst;
	unsigned	idx;
	unsigned	nbr;
	unsigned	len;

	nbr = ft_ubr(u);
	len = ft_nbrlen(nbr);
	if (!(dst = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	idx = len - 1;
	while (nbr >= 10)
	{
		dst[idx--] = (char)(nbr % 10 + 48);
		nbr = nbr / 10;
	}
	dst[idx] = (char)(nbr % 10 + 48);
	dst[len] = '\0';
	return (dst);
}

unsigned	ft_hex(unsigned x)
{
	unsigned	hex;

	if (x >= 0)
		hex = x;
	else
		hex = UINT_MAX - x;
	return (hex);
}

unsigned	ft_hexlen(unsigned hex)
{
	unsigned	len;
	
	len = 0;
	while (hex >= 16)
	{
		hex = hex / 16;
		len++;
	}
	return (len + 1);
}

char	*ft_base(unsigned x)
{
	char			*dst;
	unsigned	idx;
	unsigned	hex;
	unsigned	len;
	
	hex = ft_hex(x);
	len = ft_hexlen(hex);
	if (!(dst = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	idx = len - 1;
	while (hex >= 16)
	{
		if (hex % 16 <= 9)
			dst[idx--] = (char)(hex % 16 + 48);
		else
			dst[idx--] = (char)(hex % 16 + 87);
		hex = hex / 16;
	}
	if (hex <= 9)
		dst[idx] = (char)(hex % 16 + 48);
	else
		dst[idx] = (char)(hex % 16 + 87);
	dst[len] = '\0';
	return (dst);
}

char	*ft_Base(unsigned X)
{
	char			*dst;
	unsigned	idx;
	unsigned	hex;
	unsigned	len;

	hex = ft_hex(X);
	len = ft_hexlen(hex);
	if (!(dst = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	idx = len - 1;
	while (hex >= 16)
	{
		if (hex % 16 <= 9)
			dst[idx--] = (char)(hex % 16 + 48);
		else
			dst[idx--] = (char)(hex % 16 + 55);
		hex = hex / 16;
	}
	if (hex <= 9)
		dst[idx] = (char)(hex % 16 + 48);
	else
		dst[idx] = (char)(hex % 16 + 55);
	dst[len] = '\0';
	return (dst);
}
