/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:16:00 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/03 11:19:18 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c == ' ' || c == '\t' || c == '\v'
			|| c == '\n' || c == '\f' || c == '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	mult;
	int	number;
	int	i;

	i = 0;
	number = 0;
	mult = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		mult = mult * -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * mult);
}
