/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:15:28 by kwillum           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/02/14 23:35:34 by kwillum          ###   ########.fr       */
=======
/*   Updated: 2020/02/14 23:18:49 by emetapod         ###   ########.fr       */
>>>>>>> 6e4baba73dc4bd0808a91eee46ec26e0d6bb351a
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!(root))
		return ((void *)0);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	else if (root->left)
		return (btree_search_item(root->left, data_ref, cmpf));
	else if (root->right)
<<<<<<< HEAD
		return (btree_search_item(root->right, data_red, cmpf));
=======
		return (btree_search_item(root->right, data_ref, cmpf));
>>>>>>> 6e4baba73dc4bd0808a91eee46ec26e0d6bb351a
	return ((void *)0);
}
