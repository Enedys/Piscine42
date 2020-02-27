/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:05:17 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/14 23:36:27 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree *current;

	current = *root;
	if (*root && root)
	{
		if (cmpf(item, current->item) >= 0)
		{
			if (current->right)
				btree_insert_data(&(current->right), item, cmpf);
			else
				current->right = btree_create_node(item);
		}
		else if (cmpf(item, current->item) < 0)
		{
			if (current->left)
				btree_insert_data(&(current->left), item, cmpf);
			else
				current->left = btree_create_node(item);
		}
	}
	else
		current = btree_create_node(item);
}
