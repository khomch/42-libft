/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:27:53 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/04 10:04:06 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	word_count(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c && s[i + 1] != '\0')
			count++;
		if (s[i + 1] == '\0' && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static void	free_memo(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
}

static char	*write_word(char const *s, size_t start, size_t len)
{
	size_t	x;
	char	*word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	x = 0;
	while (x < len)
	{
		word[x] = s[start + x];
		x++;
	}
	return (word);
}

static void	split_words(char **arr, char const *s, char c)
{
	size_t	word;
	size_t	i;
	size_t	j;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			arr[word] = write_word(s, i, j);
			if (arr[word] == NULL)
				free_memo(arr);
			word++;
			i = i + j;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	words = word_count(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	split_words(res, s, c);
	if (!res)
	{
		free(res);
		return (NULL);
	}
	res[words] = NULL;
	return (res);
}
