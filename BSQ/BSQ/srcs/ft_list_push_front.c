/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:31:02 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/17 23:54:48 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, int x, int y)
{
	t_list	*new_first;

	new_first = ft_create_elem(x, y);
	if (begin_list && *begin_list)
	{
		new_first->next = *(begin_list);
		*begin_list = new_first;
	}
	else
		*begin_list = new_first;
}
