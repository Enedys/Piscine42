/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 01:41:44 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/04 22:07:37 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		internal_body(char *to_find, char *str, int counter1)
{
	int flag;
	int counter2;

	flag = 1;
	counter2 = 0;
	while (!(*(to_find + counter2) == '\0') && flag)
	{
		if (*(str + counter1 + counter2) == *(to_find + counter2))
			flag = 1;
		else
			flag = 0;
		counter2++;
	}
	return (flag);
}

char	*ft_strstr(char *str, char *to_find)
{
	int counter1;
	int flag;

	counter1 = 0;
	flag = 0;
	if (*to_find == '\0')
		return (str);
	while (!(*(str + counter1) == '\0'))
	{
		if (*(str + counter1) == *(to_find))
		{
			flag = internal_body(to_find, str, counter1);
			if (flag)
				return (str + counter1);
		}
		counter1++;
	}
	return (0);
}
