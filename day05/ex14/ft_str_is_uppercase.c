/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:34:58 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 23:21:07 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	counter;
	char			current;

	counter = 0;
	if (*str == '\0')
		return (1);
	while (!(*(str + counter) == '\0'))
	{
		current = *(str + counter);
		if (!(((current >= 'A') && (current <= 'Z'))))
			return (0);
		counter++;
	}
	return (1);
}
