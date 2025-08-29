/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 20:54:14 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:39:20 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h" 
# include <stdarg.h>

int	ft_printf(const	char *format, ...);
int	c_char_or_wchar_output(int c);
int	s_string(const char	*str);
int	p_void2hexd(void *ptr);
int	d_signed_decimal(int n);
int	ft_putnbr_base(unsigned long n, char *base, int fd);
int	u_unsigned_decimal(unsigned int n);
int	x_hex2hex_lower(unsigned int n);
int	x_hex2hex_upper(unsigned int n);
int	percent_literal_output(void);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr_hex(unsigned int n, const char *base);
int	ft_putptr(uintptr_t n);

#endif
