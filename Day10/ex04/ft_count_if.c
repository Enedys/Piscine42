/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:44:23 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/10 20:47:12 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int counter;
	int iter;

	counter = 0;
	iter = 0;
	while (!(tab[counter] == '\0'))
	{
		if (f(tab[counter]) == 1)
			iter++;
		counter++;
	}
	return (iter);
}
