/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 02:08:49 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/11 23:30:21 by kwillum          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	result;

	counter = 0;
	while ((*(s1 + counter) == *(s2 + counter)) &&
			(!(*(s1 + counter) == '\0')) && (!(*(s2 + counter) == '\0')))
		counter++;
	result = *(s1 + counter) - *(s2 + counter);
	return (result);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[counter2], tmp) <= 0)
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
