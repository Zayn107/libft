/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:21:36 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 19:38:54 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_digits(int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

int	is_neg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*popu(char *s, int n, long int i, size_t is_negative)
{
	long int	digit;

	while (n != 0)
	{
		if (n < 0)
			n = n * -1;
		digit = n % 10;
		s[i] = '0' + digit;
		n /= 10;
		--i;
	}
	if (is_negative)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	long int		i;
	size_t			num_digits;
	size_t			is_negative;
	char			*str;

	num_digits = get_num_digits(n);
	is_negative = is_neg(n);
	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (num_digits + is_negative + 1));
	if (str == NULL)
		return (NULL);
	i = num_digits + is_negative - 1;
	str = popu(str, n, i, is_negative);
	str[num_digits + is_negative] = '\0';
	return (str);
}
