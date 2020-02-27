/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:52:08 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/17 23:53:07 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(int x, int y)
{
	t_list *new_elem;

	new_elem = NULL;
	new_elem = malloc(sizeof(t_list));
	if (new_elem)
	{
		new_elem->x = x;
		new_elem->y = y;
		new_elem->next = NULL;
	}
	return (new_elem);
}
