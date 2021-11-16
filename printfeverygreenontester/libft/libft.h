/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:27:20 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/01 18:38:18 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memmove(void	*dst, const	void *src, size_t	n);
void	ft_bzero(void	*str, size_t n);
void	*ft_calloc( size_t	count, size_t	size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void	*str, int c, size_t n);
int		ft_isalnum(int character);
int		ft_isalpha(int c);
int		ft_isascii(int i);
int		ft_isdigit(int arg);
int		ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_strlen(const char	*str);
void	*ft_memset(void *str, int c, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strdup(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcat( char *dst, const char	*src, size_t	size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char	*s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_substr(char const	*s, unsigned int start, size_t	len);
void	ft_lstadd_back(t_list **alst, t_list *new);
char	*ft_strrchr(const char	*str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const	*s, char c);

#endif
