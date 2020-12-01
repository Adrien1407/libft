/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:51:26 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/25 13:51:28 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	long	long_nb;

	long_nb = c;
	if (long_nb < 0)
	{
		ft_putchar_fd('-', fd);
		long_nb = -long_nb;
	}
	if (long_nb >= 10)
	{
		ft_putnbr_fd(long_nb / 10, fd);
		ft_putchar_fd(long_nb % 10 + 48, fd);
	}
	if (long_nb < 10)
		ft_putchar_fd(long_nb + 48, fd);
}
