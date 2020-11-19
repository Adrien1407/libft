/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:52:10 by adrienlan         #+#    #+#             */
/*   Updated: 2020/11/19 15:11:20 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int nb)
{
	char		*result;
	int			i;
	int			sign;
	long int	nbr;

	nbr = nb;
	i = ft_count_digits(nb);
	if (nb <= 0)
		i++;
	sign = 0;
	if (!(result = malloc(sizeof(char) * (ft_count_digits(nb) + 1))))
		return (NULL);
	result[i--] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		result[0] = '-';
		sign++;
	}
	while (i >= sign)
	{
		result[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i--;
	}
	return (result);
}
