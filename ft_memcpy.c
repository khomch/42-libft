/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ax <ax@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:17:14 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/18 15:39:14 by ax               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstp;
	unsigned char	*srcp;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	while (n > 0)
	{
		*(dstp++) = *(srcp++);
		n--;
	}
	return (dst);
}
