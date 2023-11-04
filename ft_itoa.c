/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:25:09 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/04 12:08:07 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long num)
{
	int		len;

	len = 0;
	if (num == 0)
		len = 1;
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static void	ft_num_to_str(char *res, int is_negative, long num, int len)
{
	int	i;

	i = 0;
	while (len--)
	{
		if (is_negative && len == 0)
		{
			res[len] = '-';
			i++;
			break ;
		}
		res[len] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	num;
	int		is_negative;

	len = 0;
	num = n;
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		num = -num;
		len++;
	}
	len += ft_intlen(num);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_num_to_str(res, is_negative, num, len);
	return (res);
}
