/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:45:38 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 14:02:26 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*tmp;
	char	*tmp2;

	i = 0;
	tmp = (void*)s1;
	tmp2 = (void*)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (tmp && tmp2 && i < n)
	{
		if (tmp[i] != tmp2[i])
			return ((unsigned char)tmp[i] - (unsigned char)tmp2[i]);
		i++;
	}
	return (0);
}
