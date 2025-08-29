/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_signed_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:38:26 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:39:37 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	d_signed_decimal(int n)
{
	long	num;
	char	c;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		count += d_signed_decimal(num / 10);
	c = (num % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	i_signed_decimal(int n)
{
	return (d_signed_decimal(n));
}
