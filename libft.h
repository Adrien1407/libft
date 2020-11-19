/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:00:02 by adrienlan         #+#    #+#             */
/*   Updated: 2020/11/19 22:41:02 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

size_t	ft_strlen(const char *s);
int		ft_isalnum(int c);
void	ft_putnbr(int c);
void	ft_putnbr_fd(int c, int fd);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(const char *s);
void	ft_putendl(const char *s);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putstr_fd(const char *s, int fd);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isupper(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_nblen(int c);
char	*ft_itoa(int c);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strlcat(char *s1, const char *s2, size_t size);
size_t	ft_count_words(const char *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_bzero(void *s1, size_t n);
char	**ft_split(const char *s, char c);
void	ft_strclr(char *s);
int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *s1, const char *s2, size_t size);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

#endif
