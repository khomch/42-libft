/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:18:09 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/19 13:05:47 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	if (len == 0)
	{
		return (NULL);
	}
	while (haystack[i] != '\0' && i + needle_len <= len)
	{
		if (ft_strncmp((const char *)(haystack + i), needle, needle_len) == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
