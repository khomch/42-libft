/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ax <ax@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:07:01 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/18 15:26:39 by ax               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>

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
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

/*======== MEMORY ========*/
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *str, size_t len);
void	*ft_memcpy(void *to, const void *from, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_calloc(size_t num, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*======== ITERATORS ========*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*======== WORK WITH FILE-SYSTEM ========*/
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*======== BONUS ========*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void*));
int		ft_lstsize(t_list *lst);

#endif