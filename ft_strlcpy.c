/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:32:15 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/01 17:34:40 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

void	test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
