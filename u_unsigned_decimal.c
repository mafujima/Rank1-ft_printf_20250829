/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_unsigned_decimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:00:39 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:44:32 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	u_unsigned_decimal(unsigned int n)
{
	return (ft_putnbr_base((unsigned long)n, "0123456789", 1));
}
