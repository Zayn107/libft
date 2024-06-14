/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:00:06 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 19:52:33 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((little) && (little[0] == '\0'))
		return ((char *)big);
	while ((big[i]) && (i + ft_strlen(little) <= len))
	{
		j = 0;
		while ((little[j] == big[i + j]) && (little[j]))
			++j;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		++i;
	}
	return (NULL);
}
