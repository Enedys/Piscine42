/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:54:35 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/10 20:33:03 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int counter;
	int *p;

	p = (int*)malloc(sizeof(int) * length);
	counter = 0;
	while (counter < length)
	{
		p[counter] = f(tab[counter]);
		counter++;
	}
	return (p);
}
