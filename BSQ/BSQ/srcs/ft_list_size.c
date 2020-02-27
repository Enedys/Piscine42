/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:04:10 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/12 23:10:39 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int		counter;

	counter = 0;
	if (begin_list)
	{
		current = begin_list;
		while (current)
		{
			current = current->next;
			counter++;
		}
	}
	return (counter);
}
