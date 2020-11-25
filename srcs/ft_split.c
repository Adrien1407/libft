/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:52:12 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 13:52:14 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		is_c(char c, char d)
{
	if (c == d)
		return (1);
	return (0);
}

char	*ft_strndup(const char *src, int n)
{
	char	*copy;
	int		i;

	i = 0;
	if (!(copy = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (src[i] && i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int		countwords(const char *str, char c)
{
	int i;
	int wordcount;

	wordcount = 0;
	i = 0;
	while (str[i])
	{
		while (is_c(str[i], c))
			i++;
		if (!is_c(str[i], c) && str[i])
			wordcount++;
		while (!is_c(str[i], c) && str[i])
			i++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		count;
	int		wordlength;

	count = countwords(s, c);
	if (!(tab = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j] && is_c(s[j], c))
			j++;
		wordlength = 0;
		while (s[j + wordlength] && !is_c(s[j + wordlength], c))
			wordlength++;
		tab[i] = ft_strndup(&s[j], wordlength);
		j += wordlength;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
