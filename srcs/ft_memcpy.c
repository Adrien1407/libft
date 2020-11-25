/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:45:52 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 13:45:57 by adlancel         ###   ########.fr       */
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
