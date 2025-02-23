/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:49:19 by aalissa           #+#    #+#             */
/*   Updated: 2023/10/31 14:04:42 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int k)
{
	unsigned char	i;

	i = (unsigned char) k;
	if ('0' <= i && i <= '9')
		return (1024);
	return (0);
}
