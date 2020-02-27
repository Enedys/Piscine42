/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 00:29:34 by kwillum           #+#    #+#             */
/*   Updated: 2020/01/31 22:30:36 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		counter;
	char	temp;

	len = 0;
	counter = 0;
	while (!(*(str + len) == '\0'))
	{
		len++;
	}
	while (counter <= len / 2 - 1)
	{
		temp = *(str + counter);
		*(str + counter) = *(str + len - 1 - counter);
		*(str + len - 1 - counter) = temp;
		counter++;
	}
	return (str);
}
