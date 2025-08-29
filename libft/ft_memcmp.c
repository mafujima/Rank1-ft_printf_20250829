/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 23:23:44 by mafujima          #+#    #+#             */
/*   Updated: 2025/07/16 04:59:40 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *d, const void *s, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *) d ;
	ptr2 = (const unsigned char *) s ;
	i = 0;
	while (i < n)
	{
		if ((ptr1[i] != ptr2[i]))
			return ((int)(ptr1[i] - ptr2[i]));
		i++;
	}
	return (0);
}
