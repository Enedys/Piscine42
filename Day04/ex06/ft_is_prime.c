/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 22:45:30 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/01 23:39:50 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int counter;

	counter = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb % 2 == 0)
	{
		return (1);
	}
	while (counter < nb / 2 + 1)
	{
		if (nb % counter > 0)
		{
			counter = counter + 2;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
