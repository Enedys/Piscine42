/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 04:50:08 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/05 16:53:11 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int r_counter;
	int counter;

	r_counter = argc - 1;
	while (r_counter > 0)
	{
		counter = 0;
		while (!(*(argv[r_counter] + counter) == '\0'))
		{
			ft_putchar(*(argv[r_counter] + counter));
			counter++;
		}
		ft_putchar('\n');
		r_counter--;
	}
	return (0);
}
