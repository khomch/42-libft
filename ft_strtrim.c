/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:53:43 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/19 12:31:27 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	l;
	size_t	r;
	size_t	i;

	if (!s1)
		return (NULL);
	r = ft_strlen(s1);
	l = 0;
	while (l < r && is_in_set(set, s1[l]))
		l++;
	while (r > l && is_in_set(set, s1[r - 1]))
		r--;
	res = (char *)malloc(sizeof(char) * (r - l + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (l < r)
		res[i++] = s1[l++];
	res[i] = '\0';
	return (res);
}
