/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:14:17 by kwillum           #+#    #+#             */
/*   Updated: 2020/01/30 23:09:31 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	int counter;

	counter = 012;
	while (counter < 1000)
	{
		a = counter / 100;
		b = (counter % 100) / 10;
		c = counter % 10;
		if ((b > a) && (c > b))
		{
			ft_putchar(a + 48);
			ft_putchar(b + 48);
			ft_putchar(c + 48);
			if (counter < 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			counter++;
		}
	}
}
