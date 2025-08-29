/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:25:40 by mafujima          #+#    #+#             */
/*   Updated: 2025/07/16 04:49:48 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *chicken, const char *egg, size_t len)
{
	size_t	i_c;
	size_t	i_e;

	i_c = 0;
	if (*egg == '\0')
		return ((char *)chicken);
	while (chicken[i_c] && i_c < len)
	{
		i_e = 0;
		while (i_c + i_e < len && chicken[i_c + i_e]
			&& egg[i_e] && chicken[i_c + i_e] == egg[i_e])
			i_e++;
		if (egg[i_e] == '\0')
			return ((char *)(chicken + i_c));
		i_c++;
	}
	return (NULL);
}
