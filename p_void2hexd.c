/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_void2hexd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 17:56:53 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:43:20 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	put_hex(uintptr_t num)
{
	const char	*base = "0123456789abcdef";
	int			count;

	count = 0;
	if (num >= 16)
		count += put_hex(num / 16);
	count += write(1, &base[num % 16], 1);
	return (count);
}

int	p_void2hexd(void *ptr)
{
	uintptr_t	addr;
	int			count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	addr = (uintptr_t)ptr;
	count = write(1, "0x", 2);
	count += put_hex(addr);
	return (count);
}
