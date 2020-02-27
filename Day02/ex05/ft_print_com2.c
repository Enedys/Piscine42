/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 19:18:59 by kwillum           #+#    #+#             */
/*   Updated: 2020/01/30 23:10:13 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int counter1;
	int counter2;

	counter1 = -1;
	counter2 = -1;
	while (counter1++ <= 98)
	{
		counter2 = counter1;
		while (counter2++ <= 98)
		{
			ft_putchar(48 + counter1 / 10);
			ft_putchar(48 + counter1 % 10);
			ft_putchar(' ');
			ft_putchar(48 + counter2 / 10);
			ft_putchar(48 + counter2 % 10);
			if (!(counter1 == 98))
			{
				ft_putchar(',');
			}
		}
	}
}
