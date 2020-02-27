/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 21:55:49 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/06 21:55:59 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	char	*p;

	counter = 0;
	while (!(*(src + counter) == '\0'))
		counter++;
	p = (char *)malloc(sizeof(*src) * (counter + 1));
	while (counter >= 0)
	{
		*(p + counter) = *(src + counter);
		counter--;
	}
	return (p);
}
