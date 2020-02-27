/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:00:10 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 23:20:08 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	counter;
	char			current;

	counter = 0;
	if (*str == '\0')
		return (1);
	while (!(*(str + counter) == '\0'))
	{
		current = *(str + counter);
		if (!(((current >= 'a') && (current <= 'z'))))
			return (0);
		counter++;
	}
	return (1);
}
