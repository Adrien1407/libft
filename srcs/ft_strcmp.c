/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:12:32 by adrienlan         #+#    #+#             */
/*   Updated: 2020/09/24 16:28:21 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (((s1[i] == s2[i]) && (s1[i] && s2[i])) && (i < n - 1))
		i++;
	return ((unsigned char)s2[i] - (unsigned char)s1[i]);
}
