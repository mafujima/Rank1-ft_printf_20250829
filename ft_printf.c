/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:47:00 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:39:55 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include "libftprintf.h"

static int	ft_putnbr(int n, int fd)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += c_char_or_wchar_output('-', fd);
		count += ft_putnbr_base((unsigned int)-n, "0123456789", fd);
	}
	else
	{
		count += ft_putnbr_base((unsigned int)n, "0123456789", fd);
	}
	return (count);
}

static int	ft_print_arg(const char *fmt, va_list ap, int i, int fd)
{
	if (fmt[i] == 'c')
		return (c_char_or_wchar_output(va_arg(ap, int), fd));
	if (fmt[i] == 's')
		return (ft_putstr_fd(va_arg(ap, char *), fd));
	if (fmt[i] == 'p')
		return (ft_putstr_fd("0x", fd)
			+ ft_putnbr_base((unsigned long)va_arg(ap, void *),
				"012 3456789abcdef", fd));
	if (fmt[i] == 'd' || fmt[i] == 'i')
		return (ft_putnbr(va_arg(ap, int), fd));
	if (fmt[i] == 'u')
		return (ft_putnbr_base(va_arg(ap, unsigned int),
				"0123456789", fd));
	if (fmt[i] == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int),
				"0123456789abcdef", fd));
	if (fmt[i] == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int),
				"0123456789ABCDEF", fd));
	if (fmt[i] == '%')
		return (c_char_or_wchar_output('%', fd));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	va_start(ap, fmt);
	i = -1;
	ret = 0;
	while (fmt[++i])
	{
		if (fmt[i] == '%' && fmt[i + 1])
			ret += ft_print_arg(fmt, ap, ++i, 1);
		else
			ret += c_char_or_wchar_output(fmt[i], 1);
	}
	va_end(ap);
	return (ret);
}
