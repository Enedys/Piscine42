/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:58:26 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 23:06:05 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(char buffer)
{
	if ((('a' <= buffer) && (buffer <= 'z')) ||
		(('A' <= buffer) && (buffer <= 'Z')) ||
		(('0' <= buffer) && (buffer <= '9')))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	counter;
	char			buffer;
	char			current;

	counter = 0;
	buffer = '\0';
	while (!(*(str + counter) == '\0'))
	{
		current = *(str + counter);
		if (('A' <= current) && (current <= 'Z'))
		{
			if (is_valid(buffer))
				*(str + counter) = *(str + counter) + 32;
		}
		else if (('a' <= current) && (current <= 'z'))
		{
			if (!is_valid(buffer))
				*(str + counter) = *(str + counter) - 32;
		}
		buffer = *(str + counter);
		counter++;
	}
	return (str);
}
