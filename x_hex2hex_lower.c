/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_hex2hex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:03:35 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:44:51 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	x_hex2hex_lower(unsigned int n)
{
	return (ft_putnbr_base((unsigned long)n, "0123456789abcdef", 1));
}
