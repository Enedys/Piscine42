/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:36:27 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/09 22:40:53 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *s)
{
	int counter;

	counter = 0;
	while (!(s[counter] == '*') && !(s[counter] == '\0'))
		counter++;
	return (counter);
}

int	internal_body(char *to_find, char *str, int counter1)
{
	int flag;
	int counter2;

	flag = 1;
	counter2 = 0;
	while (!(*(to_find + counter2) == '*') &&
			!(*(to_find + counter2) == '\0') && flag)
	{
		if (*(str + counter1 + counter2) == *(to_find + counter2))
			flag = 1;
		else
			flag = 0;
		counter2++;
	}
	return (flag);
}

int	ft_strstr(char *str, char *to_find)
{
	int counter1;
	int flag;

	counter1 = 0;
	flag = 0;
	if (*to_find == '\0')
		return (-1);
	while (!(*(str + counter1) == '\0'))
	{
		if (*(str + counter1) == *(to_find))
		{
			flag = internal_body(to_find, str, counter1);
			if (flag > 0)
				return (counter1);
		}
		counter1++;
	}
	return (-1);
}

int	match(char *s2, char *s1)
{
	int counter_1;
	int counter_2;
	int len;

	counter_1 = 0;
	while (s1[counter_1] == '*')
		counter_1++;
	if ((s1[counter_1] == '\0') && (counter_1 == 0) && (s2[0] == '\0'))
		return (1);
	else if ((s1[counter_1] == '\0') && (counter_1 > 0))
		return (1);
	else if ((s1[counter_1] == '\0') && (counter_1 = 0) && (!(s2[0] == '\0')))
		return (0);
	len = ft_len(s1 + counter_1);
	counter_2 = ft_strstr(s2, s1 + counter_1);
	if ((counter_1 == 0 && counter_2 > 0) || (counter_2 < 0))
		return (0);
	if ((match(s2 + counter_2 + len, s1) + match(s2 + counter_2 + len,
		(s1 + counter_1 + len))) > 0)
		return (1);
	else
		return (0);
}
