/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:18:09 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/03 09:44:08 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	while (i < len && big[i] != '\0')
	{
		if (big[i + j] != little[j])
		{
			j = 0;
			i++;
		}
		else
		{
			j++;
			if (j == little_len)
				return ((char *)big + i);
		}
	}
	return (0);
}
