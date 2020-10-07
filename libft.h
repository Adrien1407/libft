/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:00:02 by adrienlan         #+#    #+#             */
/*   Updated: 2020/10/07 18:35:52 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isupper(int c);
int		ft_isascii(int c);
size_t	ft_nblen(int c);
char	*ft_itoa(int c);

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

#endif
