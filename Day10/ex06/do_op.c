/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 00:14:05 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/11 23:12:33 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_do_op(int value1, int value2, char sign, int (**operators)(int, int))
{
	if (sign == '*')
		ft_putnbr(operators[3](value1, value2));
	else if (sign == '+')
		ft_putnbr(operators[0](value1, value2));
	else if (sign == '-')
		ft_putnbr(operators[1](value1, value2));
	else if (sign == '/')
		ft_putnbr(operators[2](value1, value2));
	else if (sign == '%')
		ft_putnbr(operators[4](value1, value2));
	else
		ft_putstr("0");
	ft_putstr("\n");
}

int		main(int argc, char **argv)
{
	int value1;
	int value2;
	int (*operators[5]) (int, int);

	operators[0] = plus;
	operators[1] = minus;
	operators[2] = devide;
	operators[3] = multiply;
	operators[4] = rem;
	if (argc == 4 && ft_strlen(argv[2]) == 1)
	{
		value1 = ft_atoi(argv[1]);
		value2 = ft_atoi(argv[3]);
		if ((value2 == 0) && (argv[2][0] == '/'))
			ft_putstr("Stop : division by zero \n");
		else if ((value2 == 0) && (argv[2][0] == '%'))
			ft_putstr("Stop : modulo by zero \n");
		else
			ft_do_op(value1, value2, argv[2][0], operators);
	}
	else if (argc == 4)
		ft_putstr("0 \n");
	return (0);
}
