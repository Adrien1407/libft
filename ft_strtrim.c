/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:58:53 by adlancel          #+#    #+#             */
/*   Updated: 2020/11/26 11:21:31 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	len = ft_strlen(s1);
	i = 0;
	while (ft_is_in_c(s1[len - 1], (char *)set))
		len--;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (ft_is_in_c(s1[i], (char *)set))
		i++;
	j = 0;
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
