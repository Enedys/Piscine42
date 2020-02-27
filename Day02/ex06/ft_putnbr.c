/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:06:57 by kwillum           #+#    #+#             */
/*   Updated: 2020/01/30 23:12:14 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb / 10 >= 1)
	{
		ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
	if (nb / 10 <= -1)
	{
		ft_putnbr(nb / 10);
		ft_putchar(48 - nb % 10);
	}
	if (nb / 10 == 0)
	{
		if (nb > 0)
		{
			ft_putchar(nb % 10 + 48);
		}
		else
		{
			ft_putchar('-');
			ft_putchar(-nb % 10 + 48);
		}
	}
}
