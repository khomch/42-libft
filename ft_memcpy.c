/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:17:14 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/04 13:45:47 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t len)
{
	unsigned char	*source;
	unsigned char	*dest;

	source = (unsigned char *)from;
	dest = (unsigned char *)to;
	while (len--)
	{
		*dest++ = *source++;
	}
	return (to);
}
