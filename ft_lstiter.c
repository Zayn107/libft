/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:12:52 by aalissa           #+#    #+#             */
/*   Updated: 2024/06/04 17:02:24 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*c;
	t_list	*n;

	c = NULL;
	if (lst == NULL || f == NULL)
		return ;
	c = lst;
	while (c != NULL)
	{
		n = c -> next;
		f(c -> content);
		c = n;
	}
	return ;
}
