/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:42:51 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 23:26:30 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	counter;
	char			current;

	counter = 0;
	if (*str == '\0')
		return (1);
	while (!(*(str + counter) == '\0'))
	{
		current = *(str + counter);
		if (!(((current >= 32) && (current <= 126))))
			return (0);
		counter++;
	}
	return (1);
}
