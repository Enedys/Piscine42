/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 23:32:58 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/11 23:36:59 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char **str)
{
	int counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		counter1;
	int		counter2;
	int		min_ind;
	char	*tmp;
	int		argc;

	argc = ft_strlen(tab);
	counter1 = 0;
	while (counter1 < argc)
	{
		tmp = tab[counter1];
		counter2 = counter1 - 1;
		while (++counter2 < argc)
		{
			if (cmp(tab[counter2], tmp) <= 0)
			{
				min_ind = counter2;
				tmp = tab[counter2];
			}
		}
		tab[min_ind] = tab[counter1];
		tab[counter1] = tmp;
		counter1++;
	}
}
