/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 04:38:21 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/05 16:51:25 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int counter1;
	int counter2;

	counter1 = 1;
	while (counter1 < argc)
	{
		counter2 = 0;
		while (!(argv[counter1][counter2] == '\0'))
		{
			ft_putchar(argv[counter1][counter2]);
			counter2++;
		}
		ft_putchar('\n');
		counter1++;
	}
	return (0);
}
