/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:11:16 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/12 22:23:55 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*current;

	if (begin_list)
	{
		current = begin_list;
		while (current->next)
			current = current->next;
		return (current);
	}
	else
		return ((void *)0);
}
