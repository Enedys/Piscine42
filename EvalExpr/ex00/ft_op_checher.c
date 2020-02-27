/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_checher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:05:11 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/16 23:25:40 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				num_op(char ch)
{
	if (ch == '*')
		return (0);
	else if (ch == '/')
		return (1);
	else if (ch == '%')
		return (2);
	else if (ch == '+')
		return (3);
	else if (ch == '-')
		return (4);
	return (5);
}

long long int	oper(int num_oper, long long int val1, long long int val2)
{
	if (num_oper == 0)
		return (val1 * val2);
	else if (num_oper == 1)
		return (val1 / val2);
	else if (num_oper == 2)
		return (val1 % val2);
	else if (num_oper == 3)
		return (val1 + val2);
	else if (num_oper == 4)
		return (val1 - val2);
	else
		return (-1);
}

int				is_operator(char tmp)
{
	if (tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/' || tmp == '%')
		return (1);
	else if (tmp == '\0')
		return (2);
	else if (tmp == '(')
		return (3);
	else if (tmp == ')')
		return (4);
	else
		return (0);
}
