/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:58:52 by adrienlan         #+#    #+#             */
/*   Updated: 2020/11/24 23:09:17 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
size_t	i;
char	*tmp;

i = 0;
tmp = s;
while (i < n)
{
tmp[i] = c;
i++;
}
return (s);
}
