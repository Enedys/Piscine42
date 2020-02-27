/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 04:04:59 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/05 16:47:54 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int counter;

	counter = 0;
	if (argc >= 1)
	{
		while (!(argv[0][counter] == '\0'))
		{
			ft_putchar(argv[0][counter]);
			counter++;
		}
		ft_putchar('\n');
	}
	return (0);
}
