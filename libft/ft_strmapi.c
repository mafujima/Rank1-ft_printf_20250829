/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafujima <mafujima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:05:37 by mafujima          #+#    #+#             */
/*   Updated: 2025/07/16 04:08:10 by mafujima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	char			*res;
	unsigned int	i;

	size = ft_strlen(s) + 1;
	res = (char *)malloc(sizeof(char) * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char str_to_up(unsigned int i, char c)
// {
// 	return (c - 32);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "hello";
// 	printf("%s", ft_strmapi(str, str_to_up));
// }
