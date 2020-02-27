/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:54:26 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 23:04:44 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int counter;

	counter = 0;
	while (!(*(str + counter) == '\0'))
	{
		if ((*(str + counter) >= 'A') && (*(str + counter) <= 'Z'))
		{
			*(str + counter) = *(str + counter) + 32;
		}
		counter++;
	}
	return (str);
}
