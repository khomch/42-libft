/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:15:12 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/01 13:03:21 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char message2[60] = "Hell0123456789UpFriendTree";
	char temp[60];
	strcpy(temp, message2);
	printf("\n\nOriginal message: %s", temp);
	memcpy(temp + 4, temp + 16, 10);
	printf("\nAfter memcpy() without overlap:\t%s", temp);
	strcpy(temp, message2);
	memcpy(temp + 6, temp + 4, 10);
	printf("\nAfter memcpy() with overlap:\t%s", temp);

	strcpy(temp, message2);
	printf("\n\nOriginal message: %s", temp);
	memmove(temp + 4, temp + 16, 10);
	printf("\nAfter memmove() without overlap:\t%s", temp);
	strcpy(temp, message2);
	memmove(temp + 6, temp + 4, 10);
	printf("\nAfter memmove() with overlap:\t%s\n", temp);

	return 0;
}
