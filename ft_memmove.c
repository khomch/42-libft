/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:15:12 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/01 16:22:15 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dp;
	const char	*sp;

	if (src == dest)
		return (dest);
	dp = (char *)dest;
	sp = (const char *)src;
	if (sp < dp)
		while (len--)
			*(dp + len) = *(sp + len);
	else
	{
		while (len--)
			*dp++ = *sp++;
	}
	return (dest);
}
