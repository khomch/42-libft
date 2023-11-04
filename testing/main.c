/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:15:31 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/04 10:36:54 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
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

int compare_strncmp(const char *s1, const char *s2, size_t n)
{
	return (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n));
}
void test_ft_strncmp(void)
{
	printf("\n\n======== ft_strncmp ========\n");

	const char test1_s1[] = "ABC";
	const char test1_s2[] = "ABC";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_strncmp(test1_s1, test1_s2, 3))),
		   test1_s1, test1_s2, strncmp(test1_s1, test1_s2, 3), ft_strncmp(test1_s1, test1_s2, 3));

	const char test2_s1[] = "ABC";
	const char test2_s2[] = "AB";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_strncmp(test2_s1, test2_s2, 3))),
		   test2_s1, test2_s2, strncmp(test2_s1, test2_s2, 3), ft_strncmp(test1_s2, test2_s2, 3));

	const char test3_s1[] = "AB";
	const char test3_s2[] = "ABC";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_strncmp(test3_s1, test3_s2, 3))),
		   test3_s1, test3_s2, strncmp(test3_s1, test3_s2, 3), ft_strncmp(test3_s1, test3_s2, 3));

	const char test4_s1[] = "ABA";
	const char test4_s2[] = "ABZ";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_strncmp(test4_s1, test4_s2, 3))),
		   test4_s1, test4_s2, strncmp(test4_s1, test4_s2, 3), ft_strncmp(test4_s1, test4_s2, 3));
}

int compare_memchr(const void *s, int c, size_t n)
{
	return (!(strcmp(memchr(s, c, n), ft_memchr(s, c, n))));
}

void test_ft_memchr(void)
{
	const char str1[20] = "before.after.";
	const char ch1 = '.';
	char *ret1;
	ret1 = ft_memchr(str1, ch1, ft_strlen((char *)str1));

	const char str2[20] = "!after!";
	const char ch2 = '!';
	char *ret2;
	ret2 = ft_memchr(str2, ch2, ft_strlen((char *)str2));

	const char str3[20] = "be#fore#";
	const char ch3 = '#';
	char *ret3;
	ret3 = ft_memchr(str3, ch3, ft_strlen((char *)str3));

	const char str4[] = "https://www.somewebsite.com";
	const char ch4 = '.';
	char *ret4;
	ret4 = ft_memchr(str4, ch4, ft_strlen((char *)str4));

	printf("\n\n======== ft_memchr ========\n\n");

	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_memchr(str1, ch1, ft_strlen((char *)str1))), ch1, ret1);
	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_memchr(str2, ch2, ft_strlen((char *)str2))), ch2, ret2);
	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_memchr(str3, ch3, ft_strlen((char *)str3))), ch3, ret3);
	printf("%s String after |%c| is => |%s|\n", handle_test_res(compare_memchr(str4, ch4, ft_strlen((char *)str4))), ch4, ret4);
}

int compare_memcmp(const char *s1, const char *s2, size_t n)
{
	return (memcmp(s1, s2, n) == ft_memcmp(s1, s2, n));
}
void test_ft_memcmp(void)
{
	printf("\n\n======== ft_memcmp ========\n");

	const char test1_s1[] = "ABC";
	const char test1_s2[] = "ABC";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_memcmp(test1_s1, test1_s2, 3))),
		   test1_s1, test1_s2, memcmp(test1_s1, test1_s2, 3), ft_memcmp(test1_s1, test1_s2, 3));

	const char test2_s1[] = "ABC";
	const char test2_s2[] = "AB";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_memcmp(test2_s1, test2_s2, 3))),
		   test2_s1, test2_s2, memcmp(test2_s1, test2_s2, 3), ft_memcmp(test1_s2, test2_s2, 3));

	const char test3_s1[] = "AB";
	const char test3_s2[] = "ABC";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_memcmp(test3_s1, test3_s2, 3))),
		   test3_s1, test3_s2, memcmp(test3_s1, test3_s2, 3), ft_memcmp(test3_s1, test3_s2, 3));

	const char test4_s1[] = "ABA";
	const char test4_s2[] = "ABZ";
	printf("\n%s Input: %s & %s | %d = %d", (handle_test_res(compare_memcmp(test4_s1, test4_s2, 3))),
		   test4_s1, test4_s2, memcmp(test4_s1, test4_s2, 3), ft_memcmp(test4_s1, test4_s2, 3));
}

// int compare_memcmp(const char *s1, const char *s2, size_t n)
// {
// 	return (memcmp(s1, s2, n) == ft_memcmp(s1, s2, n));
// }
void test_ft_strnstr(void)
{
	printf("\n\n======== ft_strnstr ========\n");

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 8);

	char haystack[25] = "Hello the world exists.";
	char needle[25] = "the world";
	char *ptr2;
	ptr2 = ft_strnstr(haystack, needle, 20);

	char haystack1[25] = "Hello the world exists.";
	char needle1[25] = ".";
	char *ptr3;
	ptr3 = ft_strnstr(haystack1, needle1, 23);

	char haystack2[25] = "Hello the world exists.";
	char needle2[25] = "!";
	char *ptr4;
	ptr4 = ft_strnstr(haystack2, needle2, 23);

	if (strcmp("Bar Baz", ptr) == 0)
		printf("\n✅ OK: expected: %s, got %s", "Bar Baz", ptr);
	else
		printf("\n❌ Try again: expected: %s, got %s", "Bar Baz", ptr);

	if (strcmp("the world exists.", ptr2) == 0)
		printf("\n✅ OK: expected: %s, got %s", "the world exists.", ptr2);
	else
		printf("\n❌ Try again: expected: %s, got %s", "the world exists", ptr2);

	if (strcmp(".", ptr3) == 0)
		printf("\n✅ OK: expected: %s, got %s", ".", ptr3);
	else
		printf("\n✅ again: expected: %s, got %s", "the world exists", ptr3);
	printf("\n⚠️ RES should be: NULL: %s ", ptr4);
}

int compare_atoi(const char *nptr)
{
	return (atoi(nptr) == ft_atoi(nptr));
}

void test_ft_atoi(void)
{

	printf("\n\n======== ft_memchr ========\n\n");

	const char test1[] = "42";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test1)), test1, atoi(test1), ft_atoi(test1));

	const char test2[] = "0000";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test2)), test2, atoi(test2), ft_atoi(test2));

	const char test3[] = " -42";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test3)), test3, atoi(test3), ft_atoi(test3));

	const char test4[] = "   +a42 ";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test4)), test4, atoi(test4), ft_atoi(test4));

	const char test5[] = "    1234b567";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test5)), test5, atoi(test5), ft_atoi(test5));

	const char test6[] = "     2147483647";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test6)), test6, atoi(test6), ft_atoi(test6));

	const char test7[] = "     -2147483648";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test7)), test7, atoi(test7), ft_atoi(test7));

	const char test8[] = "     -2147483649";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test8)), test8, atoi(test8), ft_atoi(test8));

	const char test9[] = "   \t  -42";
	printf("%s Input: %s| is => |%d|%d|\n", handle_test_res(compare_atoi(test9)), test9, atoi(test9), ft_atoi(test9));
}

void	test_ft_strdup(void)
{
	printf("\n\n======== ft_strdup ========\n\n");

	char	tocpy[22] = "Duplication in action.";
	char	*orcpy;
	char	*ftcpy;

	orcpy = strdup(tocpy);
	ftcpy = ft_strdup(tocpy);
	if (!strcmp(orcpy, ftcpy))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);


	orcpy = strdup(tocpy + 18);
	ftcpy = ft_strdup(tocpy + 18);
	if (!strcmp(orcpy, ftcpy))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);

	orcpy = strdup("Hello");
	ftcpy = ft_strdup("Hello");
	if (!strcmp(orcpy, ftcpy))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);


	orcpy = strdup("");
	ftcpy = ft_strdup("");
	if (!strcmp(orcpy, ftcpy))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", orcpy, ftcpy);
	free(orcpy);
	free(ftcpy);
}

void	test_ft_substr(void){

	printf("\n\n======== ft_substr ========\n\n");

	char	srcstr[20] = "Hello World!";
	char	*substr;

	substr = ft_substr(srcstr, 6, 20);
	if (!strcmp(srcstr + 6, substr))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", srcstr + 6, substr);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", srcstr + 6, substr);
	free(substr);


	substr = ft_substr(srcstr, 0, 20);
	if (!strcmp(srcstr, substr))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", srcstr, substr);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", srcstr, substr);
	free(substr);

	substr = ft_substr(srcstr, 7, 1);
	if (substr[0] == srcstr[7] && substr[1] == '\0')
		printf("✅ OK: expected \"%c\", got \"%s\".\n", srcstr[7], substr);
	else
		printf("❌ Try again: expected \"%c\", got \"%s\".\n", srcstr[7], substr);
	free(substr);


	substr = ft_substr("", 7, 5);
	if (!strcmp(substr, ""))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);

	substr = ft_substr("Hello", 2, 0);
	if (!strcmp(substr, ""))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);

	substr = ft_substr("Hello", 15, 5);
	if (!strcmp(substr, ""))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);

	substr = ft_substr("", 0, 5);
	if (!strcmp(substr, ""))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "", substr);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "", substr);
	free(substr);
}

void	test_ft_strjoin(void)
{
	printf("\n\n=========== ft_strjoin ============\n\n");


	char	join0[100] = "";
	char	join1[100] = "Hello!";
	char	join2[100] = " How are you?";
	char	*res0 = NULL;
	char	*res1;
	res1 = ft_strjoin(join1, join2);
	res0 = strcat(join1, join2);
	if (!strcmp(res0, res1))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);

	strcpy(join1, "Privet!");
	res1 = ft_strjoin(join0, join1);
	res0 = strcat(join0, join1);
	if (!strcmp(res0, res1))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);

	strcpy(join1, " Whats up?");
	strcpy(join2, "");
	res1 = ft_strjoin(join1, join2);
	res0 = strcat(join1, join2);
	if (!strcmp(res0, res1))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);

	strcpy(join0, "");
	strcpy(join1, "");
	res1 = ft_strjoin(join0, join1);
	res0 = strcat(join0, join1);
	if (!strcmp(res0, res1))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", res0, res1);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", res0, res1);
	free(res1);
}

void	test_ft_strtrim(void)
{
	printf("\n\n=========== ft_strtrim ============\n\n");

	char	*trimmed;

	trimmed = ft_strtrim("/......../.hello./////...", "./");
	if (!strcmp("hello", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("", "abcd");
	if (!strcmp("", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("hello", "");
	if (!strcmp("hello", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("hello", "l");
	if (!strcmp("hello", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("hello", "xyz");
	if (!strcmp("hello", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("llllllhellolllllll", "l");
	if (!strcmp("hello", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "hello", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("llllllhellolllllll", "helo");
	if (!strcmp("", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "", trimmed);
	free(trimmed);

	trimmed = ft_strtrim("llllllhello/hilllllll", "helo");
	if (!strcmp("/hi", trimmed))
		printf("✅ OK: expected \"%s\", got \"%s\".\n", "/hi", trimmed);
	else
		printf("❌ Try again: expected \"%s\", got \"%s\".\n", "/hi", trimmed);
	free(trimmed);
}



void	test_ft_split(void)
{
	printf("\n\n=========== ft_split ============\n\n");
	char	**tab;
	unsigned int	i;
	char	s0[50] = "split         ";
	char	s1[50] = "      split       this for   me  !";
	char	s2[50] = "split       this for   me  !";
	char	s3[50] = "      split       this for   me  !       ";


	printf("---------- TEST 1 ----------\n");
	i = 0;
	tab = ft_split(s0, ' ');
	printf("Test string : \"%s\".\n\n", s0);
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 2 ----------\n");
	i = 0;
	tab = ft_split(s1, ' ');
	printf("Test string : \"%s\".\n\n", s1);
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 3 ----------\n");
	i = 0;
	tab = ft_split(s2, ' ');
	printf("Test string : \"%s\".\n\n", s2);
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 4 ----------\n");
	i = 0;
	tab = ft_split(s3, ' ');
	printf("Test string : \"%s\".\n\n", s3);
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 5 ----------\n");
	i = 0;
	tab = ft_split("", ' ');
	printf("Test string : \"%s\".\n\n", "");
	if (!tab[0])
		printf("✅ OK: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 6 ----------\n");
	i = 0;
	tab = ft_split("split", '\0');
	printf("Test string : \"%s\".\n\n", "split");
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 7 ----------\n");
	i = 0;
	tab = ft_split("\0aa\0bbb", '\0');
	printf("Test string : \"%s\".\n\n", "\\0aa\\0bbb");
	if (!tab[0])
		printf("✅ OK: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 8 ----------\n");
	i = 0;
	tab = ft_split("        ", ' ');
	printf("Test string : \"%s\".\n\n", "       ");
	if (!tab[0])
		printf("✅ OK: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 9 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("Test string : \"%s\".\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse");
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 10 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	printf("Test string : \"%s\" split at 'i'.\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 11 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	printf("Test string : \"%s\" split at 'z'.\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	if (!tab[0])
		printf("❌ Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	test_ft_itoa(void)
{
	printf("\n\n=========== ft_itoa ============\n\n");

	int	n;

	n = 0;
	if (!strcmp("0", ft_itoa(n)))
		printf("✅ OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("❌ Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

	n = 123456789;
	if (!strcmp("123456789", ft_itoa(n)))
		printf("✅ OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("❌ Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

	n = -42;
	if (!strcmp("-42", ft_itoa(n)))
		printf("✅ OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("❌ Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

	n = -2147483648;
	if (!strcmp("-2147483648", ft_itoa(n)))
		printf("✅ OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
	else
		printf("❌ Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
}

int main()
{
	printf("\n======== START ========\n");
	// test_ft_isalpha();
	// test_ft_isdigit();
	// test_ft_isalnum();
	// test_ft_isascii();
	// test_ft_isprint();
	// test_ft_strlen();
	// test_ft_memset();
	// test_ft_bzero();
	// test_ft_memcpy();
	// test_ft_memmove();
	// test_ft_strlcpy();
	// test_ft_strlcat();
	// test_ft_toupper();
	// test_ft_tolower();
	// test_ft_strchr();
	// test_ft_strrchr();
	// test_ft_strncmp();
	// test_ft_memchr();
	// test_ft_memcmp();
	// test_ft_strnstr();
	// test_ft_strnstr();
	// test_ft_atoi();
	// test_ft_strdup();
	// test_ft_substr();
	// test_ft_strjoin();
	// test_ft_strtrim();
	// test_ft_split();
	test_ft_itoa();

	return (0);
}
