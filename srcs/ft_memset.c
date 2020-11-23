/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:58:52 by adrienlan         #+#    #+#             */
/*   Updated: 2020/11/23 21:00:49 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
size_t	i;
char	*s;

i = 0;
s = b;
while (i < len)
{
s[i] = c;
i++;
}
return (b);
}
