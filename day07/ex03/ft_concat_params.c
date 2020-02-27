/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 23:37:21 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/06 22:47:20 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *c)
{
	int counter;

	counter = 0;
	while (!(c[counter] == '\0'))
		counter++;
	return (counter);
}

int		add_str(char **argv, int counter, char *p)
{
	int iter;

	iter = 0;
	while (!(argv[counter][iter] == '\0'))
	{
		*(p + iter) = argv[counter][iter];
		iter++;
	}
	*(p + iter) = '\n';
	iter++;
	return (iter);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		counter;
	int		sum_len;
	char	*p;
	int		counter2;

	counter = 1;
	sum_len = 0;
	while (counter < argc)
	{
		sum_len = sum_len + 1 + ft_strlen(argv[counter]);
		counter++;
	}
	p = (char *)malloc(sizeof(char) * (sum_len));
	counter = 1;
	counter2 = 0;
	while (counter < argc)
	{
		counter2 = counter2 + add_str(argv, counter, p + counter2);
		counter++;
	}
	*(p + counter2 - 1) = '\0';
	return (p);
}
