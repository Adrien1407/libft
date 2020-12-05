/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:59:24 by adlancel          #+#    #+#             */
/*   Updated: 2020/12/04 18:28:15 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start > ft_strlen(s))
		return (res);
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
