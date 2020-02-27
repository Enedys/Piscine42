/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:42:57 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 22:57:06 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	char			cur_s1;
	char			cur_s2;

	cur_s2 = *s2;
	cur_s1 = *s1;
	counter = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((cur_s1 == cur_s2 != '\0') && (counter < n - 1))
	{
		counter++;
		cur_s1 = *(s1 + counter);
		cur_s2 = *(s2 + counter);
	}
	return (cur_s1 - cur_s2);
}
