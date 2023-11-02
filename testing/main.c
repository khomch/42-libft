/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:15:31 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/01 16:05:02 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../libft.h"

void ft_putstr(char *c)
{
	while (*c != '\0')
	{
		write(1, c++, 1);
	}
}

char *handle_test_res(int res)
{
	if (res == 1)
		return "✅";
	else
		return "❌";
}

int compare_isalpha(char c)
{
	return (isalpha(c) > 0 ? 1 : 0) == (ft_isalpha(c) > 0 ? 1 : 0);
}
void test_ft_isalpha(void)
{
	char c;

	printf("\n\n======== ft_isalpha ========\n");

	c = 'A';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = 'Q';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = 'Z';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = 'a';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = 'q';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = 'z';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = '-';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = '1';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));

	c = '0';
	printf("\nInput: %c => %s", c, (handle_test_res(compare_isalpha(c))));
}

int compare_isdigit(int c)
{
	return (isdigit(c) > 0 ? 1 : 0) == (ft_isdigit(c) > 0 ? 1 : 0);
}

void test_ft_isdigit(void)
{
	char c;

	printf("\n\n======== ft_isdigit ========\n");

	c = '0';
	printf("\nInput: %c => %d | %d, %s", c, isdigit(c), ft_isdigit(c), (handle_test_res(compare_isdigit(c))));

	c = '5';
	printf("\nInput: %c => %d | %d, %s", c, isdigit(c), ft_isdigit(c), (handle_test_res(compare_isdigit(c))));

	c = '9';
	printf("\nInput: %c => %d | %d, %s", c, isdigit(c), ft_isdigit(c), (handle_test_res(compare_isdigit(c))));

	c = 'x';
	printf("\nInput: %c => %d | %d, %s", c, isdigit(c), ft_isdigit(c), (handle_test_res(compare_isdigit(c))));

	c = '$';
	printf("\nInput: %c => %d | %d, %s", c, isdigit(c), ft_isdigit(c), (handle_test_res(compare_isdigit(c))));
}

int compare_isalnum(int c)
{
	return (isalnum(c) > 0 ? 1 : 0) == (ft_isalnum(c) > 0 ? 1 : 0);
}

void test_ft_isalnum(void)
{
	char c;

	printf("\n\n======== ft_isalnum ========\n");

	c = '0';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = '9';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = '5';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = 'a';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = 'z';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = 'A';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = 'A';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = '&';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));

	c = '-';
	printf("\nInput: %c => %d | %d, %s", c, isalnum(c), ft_isalnum(c), (handle_test_res(compare_isalnum(c))));
}

int compare_isascii(int c)
{
	return (isascii(c) > 0 ? 1 : 0) == (ft_isascii(c) > 0 ? 1 : 0);
}

void test_ft_isascii(void)
{
	char c;

	printf("\n\n======== ft_isascii ========\n");

	c = '0';
	printf("\nInput: %c => %d | %d, %s", c, isascii(c), ft_isascii(c), (handle_test_res(compare_isascii(c))));

	c = '~';
	printf("\nInput: %c => %d | %d, %s", c, isascii(c), ft_isascii(c), (handle_test_res(compare_isascii(c))));

	c = 'a';
	printf("\nInput: %c => %d | %d, %s", c, isascii(c), ft_isascii(c), (handle_test_res(compare_isascii(c))));
}

int compare_isprint(int c)
{
	return (isprint(c) > 0 ? 1 : 0) == (ft_isprint(c) > 0 ? 1 : 0);
}

void test_ft_isprint(void)
{
	char c;

	printf("\n\n======== ft_isprint ========\n");

	c = 0;
	printf("\nInput: %d (int) => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = 1;
	printf("\nInput: %d (int) => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = 9;
	printf("\nInput: %d (int) => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = '0';
	printf("\nInput: %c => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = '1';
	printf("\nInput: %c => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = '9';
	printf("\nInput: %c => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = 'A';
	printf("\nInput: %c => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = 'Z';
	printf("\nInput: %c => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = '~';
	printf("\nInput: %c => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = '}';
	printf("\nInput: %c => %d | %d, %s", c, isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = '\n';
	printf("\nInput: nl => %d | %d, %s", isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));

	c = '\t';
	printf("\nInput: tab => %d | %d, %s", isprint(c), ft_isprint(c), (handle_test_res(compare_isprint(c))));
}

int compare_strlen(char *str)
{
	return (strlen(str) == ft_strlen(str));
}

void test_ft_strlen(void)
{
	char *str;

	printf("\n\n======== ft_isprint ========\n");

	str = "Hello!";
	printf("\nInput: %s => %lu | %lu, %s", str, strlen(str), ft_strlen(str), (handle_test_res(compare_strlen(str))));

	str = "";
	printf("\nInput: %s => %lu | %lu, %s", str, strlen(str), ft_strlen(str), (handle_test_res(compare_strlen(str))));

	str = "Hello \t 0 213 ##*)))         !";
	printf("\nInput: %s => %lu | %lu, %s", str, strlen(str), ft_strlen(str), (handle_test_res(compare_strlen(str))));
}

void test_ft_memset(void)
{
	char str1[7] = "Hello!\0";
	char str2[7] = "Hello!\0";

	printf("\n\n======== ft_memset ========\n");

	memset(str1, '!', 2);
	ft_memset(str2, '!', 2);

	printf("\n(Hello!, !, 2) => %s | %s, %s", str1, str2, handle_test_res(!strcmp(str1, str2)));
}

void test_ft_bzero(void)
{
	char str1[7] = "Hello!\0";
	char str2[7] = "Hello!\0";

	printf("\n\n======== ft_bzero ========\n");

	bzero(str1 + 2, 2);
	ft_bzero(str2 + 2, 2);

	printf("\n(Hello! + 2, 2) => %s | %s, %s", str1, str2, handle_test_res(!strcmp(str1, str2)));
}

void test_ft_memcpy(void)
{
	char to1[] = "First\0";
	char from1[] = "World\0";
	char to2[] = "First\0";
	char from2[] = "World\0";

	printf("\n\n======== ft_memcpy ========\n");

	memcpy(to1, from1, 3);
	ft_memcpy(to2, from2, 3);

	printf("\n(First => World) => %s | %s, %s", to1, to2, handle_test_res(!strcmp(to1, to2)));
}

void test_ft_memmove(void)
{
	printf("\n\n=========== ft_memmove ============\n\n");

	char srcdest[20] = "a1b2c3d4e5f6g7";
	char ftsrcdest[20] = "a1b2c3d4e5f6g7";

	if (!strcmp((char *)memmove(srcdest + 2, srcdest, 7), (char *)ft_memmove(ftsrcdest + 2, ftsrcdest, 7)))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);

	if (!strcmp((char *)memmove(srcdest + 4, srcdest, 7), (char *)ft_memmove(ftsrcdest + 4, ftsrcdest, 7)))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);

	if (!strcmp((char *)memmove(srcdest, srcdest + 8, 7), (char *)ft_memmove(ftsrcdest, ftsrcdest + 8, 7)))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);

	if (!strcmp((char *)memmove(srcdest + 2, srcdest, 0), (char *)ft_memmove(ftsrcdest + 2, ftsrcdest, 0)))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);

	if (!strcmp((char *)memmove(srcdest, srcdest, 5), (char *)ft_memmove(ftsrcdest, ftsrcdest, 5)))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", srcdest, ftsrcdest);
}

int main()
{
	printf("\n======== START ========\n");
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();

	return (0);
}
