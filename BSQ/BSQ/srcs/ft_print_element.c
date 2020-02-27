/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_element.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 00:02:49 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/18 00:08:28 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_print_element(t_list *begin_list, unsigned int nbr)
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
		{
			ft_putstr("# ");
			ft_putnbr(counter);
			ft_putstr("\n x: ");
			ft_putnbr(current->x);
			ft_putstr("\n y: ");
			ft_putnbr(current->y);
			ft_putstr("\n");
		}
		else
			return ;
	}
}
