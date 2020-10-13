/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:52:10 by adrienlan         #+#    #+#             */
/*   Updated: 2020/10/09 14:22:26 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t		i;
	char		*num;
	long int	long_n;
	size_t		sign;

	long_n = n;
	i = ft_nblen(long_n);
	sign = 0;
	if (!(num = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	num[i] = '\0';
	if (long_n < 0)
	{
		long_n = -long_n;
		num[0] = '-';
		sign++;
	}
	i--;
	while (i >= sign)
	{
		num[i] = long_n % 10 + 48;
		long_n = long_n / 10;
		i--;
	}
	return (num);
}
