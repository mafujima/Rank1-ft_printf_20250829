/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:42:20 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:42:53 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(unsigned long n, char *base, int fd)
{
	int	len;
	int	count;

	len = ft_strlen(base);
	count = 0;
	if (n >= (unsigned long)len)
		count += ft_putnbr_base(n / len, base, fd);
	count += write(fd, &base[n % len], 1);
	return (count);
}
