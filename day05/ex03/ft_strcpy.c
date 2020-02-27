/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 20:04:38 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 21:44:57 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (!(*(src + counter) == '\0'))
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	*(dest + counter) = '\0';
	return (dest + counter);
}
