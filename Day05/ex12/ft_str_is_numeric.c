/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:49:57 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 23:17:15 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	counter;
	char			current;

	counter = 0;
	if (*str == '\0')
		return (1);
	while (!(*(str + counter) == '\0'))
	{
		current = *(str + counter);
		if (!(((current >= '0') && (current <= '9'))))
			return (0);
		counter++;
	}
	return (1);
}
