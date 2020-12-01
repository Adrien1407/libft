/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:45:20 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 13:45:21 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*sd;
	char	*sr;

	sd = dst;
	sr = (void*)src;
	i = 0;
	while (i < n)
	{
		sd[i] = sr[i];
		i++;
		if (sr[i - 1] == c)
			return (dst + i);
	}
	return (NULL);
}
