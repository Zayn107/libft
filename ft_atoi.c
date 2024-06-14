/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:44:49 by aalissa           #+#    #+#             */
/*   Updated: 2023/11/09 19:37:12 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			s;
	size_t		i;
	long int	temp;

	temp = 0;
	i = 0;
	s = 1;
	while (((8 <= str[i]) && (str[i] <= 13)) || str[i] == ' ')
		++i;
	if (str[i] == '-')
	{
		s = -1;
		++i;
	}
	else if (str[i] == '+')
		++i;
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		temp = temp * 10 + (str[i] - '0');
		++i;
	}
	return (temp * s);
}
