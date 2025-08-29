/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:10:16 by mafujima          #+#    #+#             */
/*   Updated: 2025/07/15 23:40:40 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	mem = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!mem)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		mem[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		mem[i + j] = s2[j];
		j++;
	}
	mem[i + j] = '\0';
	return (mem);
}
