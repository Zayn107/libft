/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:32 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 19:50:41 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	while ((dest[i]) && (i < size))
		++i;
	while ((src[k]) && (k + i + 1 < size))
	{
		dest[i + k] = src [k];
		++k;
	}
	if (size - i > 0)
		dest[k + i] = '\0';
	while (src[k])
		++k;
	return (i + k);
}
