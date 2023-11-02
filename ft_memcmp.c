/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:00:54 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/02 18:46:23 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sp1;
	const unsigned char	*sp2;

	sp1 = (const unsigned char *)s1;
	sp2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(sp1 + i) != *(sp2 + i))
			return (*(sp1 + i) - *(sp2 + i));
		i++;
	}
	return (0);
}
