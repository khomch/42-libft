/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:15:31 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/02 14:47:26 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
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

	printf("\n\n======== ft_strlen ========\n");

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

void test_ft_strlcpy(void)
{
	printf("\n\n=========== ft_strlcpy ============\n\n");

	char string[] = "Hello there, Venus";
	char buffer1[19];
	char buffer2[19];
	char buffer3[19];

	if (ft_strlcpy(buffer1, string, 19) == 18 && !strcmp(buffer1, string))
		printf("✅ OK: expected \"%s\", got \"%s\"\n", buffer1, string);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", buffer1, string);
	if (ft_strlcpy(buffer2, string, 10) == 18 && !strcmp(buffer2, "Hello the"))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "Hello the", buffer2);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "Hello the", buffer2);
	if (ft_strlcpy(buffer3, string, 0) == 18 && !strcmp(buffer3, ""))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "", buffer3);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "", buffer3);
}

void test_ft_strlcat(void)
{
	printf("\n\n=========== ft_strlcat ============\n\n");

	char first[] = "This is ";				   // 8
	char last[] = "a potentially long string"; // 25
	char buffer1[33];
	char buffer2[33];
	char buffer3[33];

	strcpy(buffer1, first);
	if (ft_strlcat(buffer1, last, 33) == 33 && !strcmp(buffer1, "This is a potentially long string"))
		printf("✅ Test1: OK: expected \"%s\", got \"%s\"\n", "This is a potentially long string", buffer1);
	else
		printf("❌ Test1: Try again: expected \"%s\", got \"%s\".\n", "This is a potentially long string", buffer1);

	strcpy(buffer2, first);
	if (ft_strlcat(buffer2, last, 16) == 33 && !strcmp(buffer2, "This is a potent"))
		printf("✅ Test2: OK: expected \"%s\", got \"%s\"\n", "This is a potent", buffer2);
	else
		printf("❌ Test2: Try again: expected \"%s\", got \"%s\".\n", "This is a potent", buffer2);

	strcpy(buffer3, first);
	if (ft_strlcat(buffer3, last, 0) == 33 && !strcmp(buffer3, "This is "))
		printf("✅ Test2: OK: expected \"%s\", got \"%s\"\n", "This is ", buffer3);
	else
		printf("❌ Test2: Try again: expected \"%s\", got \"%s\".\n", "This is ", buffer3);
}

int compare_toupper(char c)
{
	return (toupper(c) == ft_toupper(c));
}
void test_ft_toupper(void)
{
	char c;

	printf("\n\n======== ft_toupper ========\n");

	c = 'a';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = 't';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = 'z';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = 'A';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = 'Y';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = 'Z';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = '0';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = '~';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));

	c = '.';
	printf("\nInput: %c => %c | %c, %s", c, toupper(c), ft_toupper(c), (handle_test_res(compare_toupper(c))));
}

int compare_tolower(char c)
{
	return (tolower(c) == ft_tolower(c));
}
void test_ft_tolower(void)
{
	char c;

	printf("\n\n======== ft_tolower ========\n");

	c = 'a';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = 't';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = 'z';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = 'A';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = 'Y';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = 'Z';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = '0';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = '~';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));

	c = '.';
	printf("\nInput: %c => %c | %c, %s", c, tolower(c), ft_tolower(c), (handle_test_res(compare_tolower(c))));
}

int compare_strchr(const char *s, int c)
{
	return (!(strcmp(strchr(s, c), ft_strchr(s, c))));
}
void test_ft_strchr(void)
{
	const char str1[20] = "before.after.";
	const char ch1 = '.';
	char *ret1;
	ret1 = ft_strchr(str1, ch1);

	const char str2[20] = "!after!";
	const char ch2 = '!';
	char *ret2;
	ret2 = ft_strchr(str2, ch2);

	const char str3[20] = "be#fore#";
	const char ch3 = '#';
	char *ret3;
	ret3 = ft_strchr(str3, ch3);

	const char str4[20] = "no symbol here\0";
	const char ch4 = '#';
	char *ret4;
	ret4 = ft_strchr(str4, ch4);

	printf("\n\n======== ft_strchr ========\n\n");

	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_strchr(str1, ch1)), ch1, ret1);
	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_strchr(str2, ch2)), ch2, ret2);
	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_strchr(str3, ch3)), ch3, ret3);
	printf("⚠️  Check if no char in str: String after |%c| is => %s|%s|\n", ch4, ret4, strchr(str4, ch4));
}

int compare_strrchr(const char *s, int c)
{
	return (!(strcmp(strrchr(s, c), ft_strrchr(s, c))));
}
void test_ft_strrchr(void)
{
	const char str1[20] = ".be.fore.after";
	const char ch1 = '.';
	char *ret1;
	ret1 = ft_strrchr(str1, ch1);

	const char str2[20] = "!aft!er";
	const char ch2 = '!';
	char *ret2;
	ret2 = ft_strrchr(str2, ch2);

	const char str3[20] = "befo#re#";
	const char ch3 = '#';
	char *ret3;
	ret3 = ft_strrchr(str3, ch3);

	const char str4[20] = "no symbol here\0";
	const char ch4 = '#';
	char *ret4;
	ret4 = ft_strrchr(str4, ch4);

	printf("\n\n======== ft_strrchr ========\n\n");

	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_strrchr(str1, ch1)), ch1, ret1);
	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_strrchr(str2, ch2)), ch2, ret2);
	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_strrchr(str3, ch3)), ch3, ret3);
	printf("⚠️  Check if no char in str: String after |%c| is => %s|%s|\n", ch4, ret4, strrchr(str4, ch4));
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
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();

	return (0);
}
