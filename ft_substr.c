/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:46:59 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/03 13:19:37 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	j = start;
	slen = ft_strlen(s);
	if (slen < start)
		return (ft_strdup(""));
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len && s[j] && s[j] != '\0')
	{
		res[i] = s[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
