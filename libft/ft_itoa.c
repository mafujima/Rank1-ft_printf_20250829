/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 22:57:45 by mafujima          #+#    #+#             */
/*   Updated: 2025/07/16 03:56:50 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		buf[12];
	int			i;
	long int	un;

	i = 11;
	buf[i] = '\0';
	un = n;
	if (un < 0)
		un *= -1;
	while (1)
	{
		buf[--i] = un % 10 + '0';
		un /= 10;
		if (!un)
			break ;
	}
	if (n < 0)
		buf[--i] = '-';
	return (ft_strdup(&buf[i]));
}
