/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:11:32 by adlancel          #+#    #+#             */
/*   Updated: 2020/12/04 16:07:54 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		is_word;
	int		i;

	is_word = 0;
	count = 0;
	i = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] == c)
				is_word = 0;
			else if (is_word == 0)
			{
				is_word = 1;
				count++;
			}
			i++;
		}
	}
	return (count);
}
