/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:35:09 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 23:11:43 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	counter;
	char			current;

	counter = 0;
	if (*str == '\0')
		return (1);
	while (!(*(str + counter) == '\0'))
	{
		current = *(str + counter);
		if (!(((current >= 'a') && (current <= 'z')) ||
			((current <= 'Z') && (current >= 'A'))))
			return (0);
		counter++;
	}
	return (1);
}
