/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:54:27 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 13:54:29 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t		destlength;
	size_t		j;
	size_t		result;

	destlength = ft_strlen(s1);
	j = 0;
	result = ft_strlen(s2);
	result = (size <= destlength) ? result + size : result + destlength;
	while (s2[j] && (destlength + 1) < size)
	{
		s1[destlength++] = s2[j++];
	}
	s1[destlength] = '\0';
	return (result);
}
