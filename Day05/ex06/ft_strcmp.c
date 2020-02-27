/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 00:02:08 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 22:54:07 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int counter;
	int result;

	counter = 0;
	while ((*(s1 + counter) == *(s2 + counter)) &&
			(!(*(s1 + counter) == '\0')) && (!(*(s2 + counter) == '\0')))
	{
		counter++;
	}
	result = *(s1 + counter) - *(s2 + counter);
	return (result);
}
