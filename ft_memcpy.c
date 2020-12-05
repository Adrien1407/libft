/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:45:52 by adlancel          #+#    #+#             */
/*   Updated: 2020/12/04 18:35:11 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	i = 0;
	if (!dst && !src)
		return (NULL);
	tmp = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (dst);
}
