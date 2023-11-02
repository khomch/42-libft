/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:32:15 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/02 10:13:54 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (*(src + i) != '\0')
		{
			if (i == size)
			{
				i--;
				break ;
			}
			else
			{
				*(dst + i) = *(src + i);
				i++;
			}
		}
	}
	*(dst + i) = '\0';
	while (*(src + i) != '\0')
		i++;
	return (i);
}
