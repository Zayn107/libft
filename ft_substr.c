/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:09:32 by aalissa           #+#    #+#             */
/*   Updated: 2024/06/04 17:00:47 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;
	size_t			s_len;

	if (s == NULL)
		return (NULL);
	else if ((start >= ft_strlen(s)) || (len == 0))
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = (s_len - start);
	ptr = (char *)malloc(sizeof(char) * (len +1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while ((s[start + i]) && (i < len))
	{
		ptr[i] = s[start + i];
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}
