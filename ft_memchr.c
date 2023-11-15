/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:09:48 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/15 20:33:27 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*sp;

	ch = c;
	sp = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(sp + i) == ch)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
