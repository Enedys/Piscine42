/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   summator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 17:28:23 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/16 23:30:56 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

int				ft_dimnb(long long int nb)
{
	int len;

	len = 0;
	while (nb / 10 > 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len + 1);
}

long long int	next_nb(char *str, int *pos)
{
	long long int	val;
	int				counter;

	counter = 0;
	while (str[*pos + counter] == ' ')
		counter++;
	if (str[*pos + counter] == '(')
	{
		*pos = *pos + counter + 1;
		val = in_calc(str, 0, pos);
		counter = 0;
		*pos = *pos + 1;
	}
	else
	{
		val = ft_atoi((str + counter + *pos));
		counter = counter + ft_dimnb(val);
	}
	while (str[*pos + counter] == ' ')
		counter++;
	*pos = *pos + counter;
	return (val);
}

long long int	in_calc(char *st, long long int val, int *pos)
{
	int op_n;

	if (is_operator(st[*pos]) == 2)
		return (val);
	else if (is_operator(st[*pos]) == 4)
		return (val);
	else if (is_operator(st[*pos]) == 3)
	{
		val = next_nb(st, pos);
		return (in_calc(st, val, pos));
	}
	else if (is_operator(st[*pos]) == 1)
	{
		op_n = num_op(st[*pos]);
		*pos = *pos + 1;
		if (op_n <= 2)
			return (in_calc(st, oper(op_n, val, next_nb(st, pos)), pos));
		else if (op_n > 2)
			return (val + in_calc(st, oper(op_n, 0, next_nb(st, pos)), pos));
	}
	else
		return (in_calc(st, next_nb(st, pos), pos));
	return (0);
}

int				eval_expr(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] == ' ')
		counter++;
	return (in_calc(str, 0, &counter));
}
