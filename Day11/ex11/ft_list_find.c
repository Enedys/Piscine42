/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:37:49 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/12 23:15:33 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int
		(*cmp)(void *, void *))
{
	t_list *current;

	current = begin_list;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
			return (current);
		current = current->next;
	}
	return ((void *)0);
}
