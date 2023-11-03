/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:27:53 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/03 17:32:46 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

static char	**write_words(char const *s, char c, int words)
{
	size_t	word;
	size_t	i;
	size_t	j;
	char	**arr;

	word = 0;
	i = 0;
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			arr[word] = write_word(s, i, j);
			word++;
			i = i + j;
		}
		i++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	words = word_count(s, c);
	res = write_words(s, c, words);
	if (!res)
		return (NULL);
	res[words] = NULL;
	return (res);
}
/*
int main(void)
{
	char **split;
	int	i;
	int j;

	i = 0;
	split = ft_split("  one two   three four  ", ' ');
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	
	j = 0;
	while (split[j])
	{
		free(split[j]);
		j++;
	}
	free(split);
    return (1);
}
*/
