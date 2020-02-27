/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:21:02 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 22:58:32 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int counter;

	counter = 0;
	while (!(*(str + counter) == '\0'))
	{
		if ((*(str + counter) >= 'a') && (*(str + counter) <= 'z'))
		{
			*(str + counter) = *(str + counter) - 32;
		}
		counter++;
	}
	return (str);
}
