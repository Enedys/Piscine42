/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puststr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 23:50:36 by kwillum           #+#    #+#             */
/*   Updated: 2020/01/31 21:12:11 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (!(*(str + counter) == '\0'))
	{
		ft_putchar(*(str + counter));
		counter++;
	}
}
