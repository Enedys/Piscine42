/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 23:14:08 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/11 03:20:01 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int counter1;

	i = 0;
	counter1 = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			counter1++;
		i++;
	}
	if (counter1 == (length - 1))
		return (1);
	else if (length == 0)
		return (1);
	else
		return (0);
}
