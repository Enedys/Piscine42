/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 02:45:33 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/06 22:39:00 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
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
	*range = array;
	if (max - min > 0)
		return (max - min);
	else
		return (0);
}
