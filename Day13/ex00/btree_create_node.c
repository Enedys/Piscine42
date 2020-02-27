/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 10:34:18 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/14 22:19:13 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *new_element;

	new_element = malloc(sizeof(t_btree));
	if (new_element)
	{
		new_element->item = item;
		new_element->left = NULL;
		new_element->right = NULL;
		return (new_element);
	}
	else
		return (NULL);
}
