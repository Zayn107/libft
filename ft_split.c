/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:19:47 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 20:02:23 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	slen(const char *s)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*word_cpy(char const *src, size_t start, size_t end)
{
	char	*dst;
	int		i;

	i = 0;
	if (!src)
		return (0);
	dst = malloc(sizeof(char) * (end - start + 1));
	if (!dst)
		return (0);
	while (start < end)
		dst[i++] = src[start++];
	dst[i] = 0;
	return (dst);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < slen(s))
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	start = -1;
	i = 0;
	j = 0;
	res = malloc(sizeof (char *) * (count_words(s, c) + 1));
	if (!s || !res)
		return (0);
	while (i <= slen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == slen(s)) && start >= 0)
		{
			res[j++] = word_cpy(s, start, i);
			start = -1;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
