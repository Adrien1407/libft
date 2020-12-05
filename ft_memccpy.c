/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:45:20 by adlancel          #+#    #+#             */
/*   Updated: 2020/12/04 14:55:13 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sd;
	unsigned char	*sr;

	sd = (unsigned char *)dst;
	sr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		sd[i] = sr[i];
		i++;
		if (sr[i - 1] == (unsigned char)c)
			return (dst + i);
	}
	return (NULL);
}
