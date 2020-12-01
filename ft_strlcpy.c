/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:54:39 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 13:54:41 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	while ((s2[i]) && (i + 1 < size))
	{
		s1[i] = s2[i];
		i++;
	}
	if (size > 0)
	{
		s1[i] = '\0';
	}
	j = 0;
	while (s2[j])
	{
		j++;
	}
	return (j);
}
