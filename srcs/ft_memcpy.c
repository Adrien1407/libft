/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:14:06 by adrienlan         #+#    #+#             */
/*   Updated: 2020/11/20 13:04:09 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char*)dst;
	while (i < n)
	{
		*(char*)dst = *(char*)src;
		dst++;
		src++;
		i++;
	}
	return (tmp);
}
