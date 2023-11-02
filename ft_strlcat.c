/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:17:07 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/02 12:06:17 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	len1;
	size_t	len2;

	j = 0;
	len1 = ft_strlen(dst);
	len2 = ft_strlen((char *)src);
	while (len1 + j < size)
	{
		*(dst + len1 + j) = *(src + j);
		j++;
	}
	*(dst + len1 + j) = '\0';
	return (len1 + len2);
}
