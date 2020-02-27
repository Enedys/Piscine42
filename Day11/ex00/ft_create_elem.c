/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:52:08 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/12 21:33:53 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *new_elem;

	new_elem = NULL;
	new_elem = malloc(sizeof(t_list));
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}
