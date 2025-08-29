/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:27:20 by mafujima          #+#    #+#             */
/*   Updated: 2025/08/23 13:44:15 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	s_string(const char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (str [len])
		len++;
	return (write(1, str, len));
}
