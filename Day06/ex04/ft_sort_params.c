/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:29:15 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/05 16:36:27 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *c)
{
	int	counter;

	counter = 0;
	while (!(c[counter] == '\0'))
	{
		ft_putchar(c[counter]);
		counter++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	result;

	counter = 0;
	while ((*(s1 + counter) == *(s2 + counter)) &&
			(!(*(s1 + counter) == '\0')) && (!(*(s2 + counter) == '\0')))
	{
		counter++;
	}
	result = *(s1 + counter) - *(s2 + counter);
	return (result);
}

int		main(int argc, char **argv)
{
	int		counter1;
	int		counter2;
	int		min_ind;
	char	*tmp;

	counter1 = 1;
	while (counter1 < argc)
	{
		tmp = argv[counter1];
		counter2 = counter1;
		while (counter2 < argc)
		{
			if (ft_strcmp(argv[counter2], tmp) <= 0)
			{
				min_ind = counter2;
				tmp = argv[counter2];
			}
			counter2++;
		}
		argv[min_ind] = argv[counter1];
		argv[counter1] = tmp;
		ft_putstr(tmp);
		counter1++;
	}
	return (0);
}
