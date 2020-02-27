/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 20:07:23 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 22:04:29 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (!(*(src + counter) == '\0'))
	{
		if (counter < (n))
		{
			*(dest + counter) = *(src + counter);
		}
		else
		{
			break ;
		}
		counter++;
	}
	while (counter < n)
	{
		*(dest + counter) = '\0';
		counter++;
	}
	return (dest);
}
