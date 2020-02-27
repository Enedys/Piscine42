/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:20:36 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/06 22:32:06 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *array;
	int dim;

	dim = max - min;
	array = (int *)malloc(sizeof(*array) * dim);
	while (dim > 0)
	{
		array[dim - 1] = min + dim - 1;
		dim--;
	}
	return (array);
}
