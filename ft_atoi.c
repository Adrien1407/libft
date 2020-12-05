/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:49:07 by adlancel          #+#    #+#             */
/*   Updated: 2020/12/04 14:39:34 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	size_t			i;
	size_t			j;
	int				negative;
	long int		atoi;

	i = 0;
	j = 0;
	atoi = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			negative = -negative;
	while (str[i] == '0')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && j++ >= 0)
		atoi = atoi * 10 + str[i++] - '0';
	i = ft_count_digits(atoi);
	if (i == j)
		return (atoi * negative);
	if (negative < 0)
		return (0);
	return (-1);
}
