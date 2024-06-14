/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:59:51 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 19:38:30 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total_size;
	void	*ptr;

	if ((nmemb == 0) || (size == 0))
		return (ptr = malloc(nmemb * size));
	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (++i < total_size)
		((unsigned char *)ptr)[i] = 0;
	return (ptr);
}
