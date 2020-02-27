/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:25:34 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/12 23:06:23 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		counter;
	t_list	*current;
	t_list	*start;

	if (ac >= 1)
	{
		start = ft_create_elem(av[ac - 1]);
		current = start;
		counter = ac - 2;
		while (counter >= 0)
		{
			current->next = ft_create_elem(av[counter]);
			current = current->next;
			counter--;
		}
		return (start);
	}
	else
		return ((void *)0);
}
