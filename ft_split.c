/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:52:12 by adlancel          #+#    #+#             */
/*   Updated: 2020/12/04 18:32:32 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	wordlength;

	i = 0;
	j = 0;
	count = ft_count_words(s, c);
	if (!s || !(tab = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	while (i < count)
	{
		while (s[j] && ft_is_c(s[j], c))
			j++;
		wordlength = 0;
		while (s[j + wordlength] && !ft_is_c(s[j + wordlength], c))
			wordlength++;
		tab[i] = ft_strndup(&s[j], wordlength);
		j += wordlength;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
