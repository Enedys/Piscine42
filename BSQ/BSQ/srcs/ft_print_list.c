/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 23:56:20 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/18 00:07:52 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_print_list(t_list *begin_list)
{
	t_list	*current;
	int		counter;

	counter = 0;
	if (begin_list)
	{
		current = begin_list;
		while (current)
		{
			ft_putstr("# ");
			ft_putnbr(counter);
			ft_putstr("\n x: ");
			ft_putnbr(current->x);
			ft_putstr("\n y: ");
			ft_putnbr(current->y);
			ft_putstr("\n");
			current = current->next;
			counter++;
		}
	}
}
