/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_hex2hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:05:30 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:45:09 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	x_hex2hex_upper(unsigned int n)
{
	return (ft_putnbr_base((unsigned long)n, "0123456789ABCDEF", 1));
}
