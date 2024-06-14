/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:42:13 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 19:43:46 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s2 = (char *)dest;
	s1 = (char *)src;
	i = 0;
	if (s1 > s2)
	{
		while (i < n)
		{
			s2[i] = s1[i];
			++i;
		}
	}
	else
	{
		while (n > 0)
		{
			s2[n - 1] = s1[n - 1];
			--n;
		}
	}
	return (s2);
}
