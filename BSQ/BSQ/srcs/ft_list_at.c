/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:45:28 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/17 23:55:40 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	counter;
	t_list			*current;

	counter = 0;
	if (begin_list)
	{
		current = begin_list;
		while ((counter < nbr) && (current))
		{
			current = current->next;
			counter++;
		}
		if (counter == nbr)
			return (current);
		else
			return ((void *)0);
	}
	return ((void *)0);
}
