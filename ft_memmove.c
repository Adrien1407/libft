/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:46:27 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 14:02:49 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;
	char	*tmp2;

	tmp = dest;
	tmp2 = (void*)src;
	i = 0;
	if (tmp2 < tmp)
	{
		i++;
		while (i <= n)
		{
			tmp[n - i] = tmp2[n - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			tmp[i] = tmp2[i];
			i++;
		}
	}
	return (dest);
}
