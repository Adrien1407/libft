/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienlanlan <adlancel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:38:54 by adrienlan         #+#    #+#             */
/*   Updated: 2020/11/24 23:16:29 by adrienlan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list *tmp;

	tmp = lst;
	if (lst != NULL || f != NULL)
	{
		while (tmp)
		{
			f(tmp);
			tmp = tmp->next;
		}
	}
}
