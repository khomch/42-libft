/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:07:01 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/03 12:15:06 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
#define		LIBFT_H
#include	<unistd.h>
#include	<stddef.h>
#include	<stdlib.h>

/*======== CHARS ========*/
int		ft_isalpha(char c);
int		ft_isdigit(int arg);
int		ft_isalnum(int arg);
int		ft_isascii(int arg);
int		ft_isprint(int arg);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*======== STRINGS ========*/
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int	ft_atoi(const char *str);
char	*ft_strdup(const char *s);

/*======== MEMORY ========*/
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *str, size_t len);
void	*ft_memcpy(void *to, void *from, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_calloc(size_t num, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
