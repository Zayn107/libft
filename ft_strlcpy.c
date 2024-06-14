/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:58:59 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 19:51:02 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	while ((i + 1 < size) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		++i;
	}
	len = 0;
	while (src[len])
		++len;
	if (size > 0)
		dest[i] = '\0';
	return (len);
}
