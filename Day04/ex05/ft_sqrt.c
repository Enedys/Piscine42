/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:15:11 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/01 22:34:00 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_sqr(int left, int right)
{
	int sum;

	sum = (left + right) / 2;
	return (sum * sum);
}

int	ft_sqrt(int nb)
{
	int left;
	int right;

	left = 0;
	right = 46341;
	if (nb <= 0)
	{
		return (0);
	}
	while (left < right - 1)
	{
		if (calc_sqr(left, right) >= nb)
		{
			if (calc_sqr(left, right) == nb)
			{
				return ((left + right) / 2);
			}
			right = (left + right) / 2;
		}
		else
		{
			left = (left + right) / 2;
		}
	}
}
