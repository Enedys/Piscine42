/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:41:48 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/12 23:24:07 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *cur;

	tmp = (void *)0;
	if (begin_list && *begin_list)
	{
		cur = *begin_list;
		while ((*begin_list)->next)
		{
			*begin_list = cur->next;
			cur->next = tmp;
			tmp = cur;
			cur = *begin_list;
		}
		cur->next = tmp;
	}
}
