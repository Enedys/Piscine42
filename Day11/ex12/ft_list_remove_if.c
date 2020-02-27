/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:44:26 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/12 21:33:02 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	t_list *current;
	t_list *tmp;

	current = *begin_list;
	while (current && current -> next)
	{
		if (cmp(current -> data, data_ref) == 0)
		{
			tmp = current;
			current = current -> next;
			free(tmp);
		}
		else if (cmp(current -> next -> data, data_ref) == 0)
		{
			tmp = current -> next;
			current -> next = current -> next -> next;
			free(tmp);
		}
		else
		{
			tmp = current;
			current = current -> next;
		}
	}
}
