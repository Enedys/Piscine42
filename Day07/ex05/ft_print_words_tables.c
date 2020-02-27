/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 20:52:33 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/06 22:48:32 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int counter;
	int counter1;

	counter = 0;
	while (!(tab[counter] == NULL))
	{
		counter1 = 0;
		while (!(tab[counter][counter1] == '\0'))
		{
			ft_putchar(tab[counter][counter1]);
			counter1++;
		}
		ft_putchar('\n');
		counter++;
	}
}
