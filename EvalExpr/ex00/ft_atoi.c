/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:48:15 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/16 23:27:16 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				is_space(char cur)
{
	if ((cur <= '9' && cur >= '0') || (cur == '-' || cur == '+' ||
	cur == '\t' || cur == '\n' || cur == '\f' ||
	cur == '\r' || cur == '\v' || cur == ' '))
		return (1);
	else
		return (0);
}

long long int	ft_flag(char a)
{
	if (a == '+')
		return (1);
	else
		return (-1);
}

long long int	ft_intstring(char *str)
{
	long long int		res;
	char				sim;
	int					counter;

	res = 0;
	counter = 1;
	sim = *str;
	while (!(sim == '\0') && (sim <= '9') && (sim >= '0'))
	{
		res = res * 10 + (sim - 48);
		sim = *(str + counter);
		counter++;
	}
	return (res);
}

long long int	ft_atoi(char *str)
{
	int				counter;
	char			cur;
	long long int	sign;

	sign = 1;
	counter = 0;
	cur = *(str + counter);
	while (!(cur == '\0') && is_space(cur))
	{
		cur = *(str + counter);
		if (cur == '+' || cur == '-')
		{
			if (*(str + counter + 1) <= '9' || *(str + counter + 1) >= '0')
				return (ft_flag(cur) * ft_intstring(str + counter + 1));
			return (0);
		}
		else if (cur <= '9' && cur >= '0')
			return (sign * ft_intstring(str + counter));
		counter++;
	}
	return (0);
}
