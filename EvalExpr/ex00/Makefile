# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwillum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 17:02:38 by kwillum           #+#    #+#              #
#    Updated: 2020/02/16 21:11:04 by kwillum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ./ft_putchar.c ./ft_putstr.c ./ft_putnbr.c ./ft_op_checher.c ./ft_atoi.c ./summator.c ./main.c

OSRCS = ./ft_putchar.o ./ft_putstr.o ./ft_putnbr.o ./ft_op_checher.o ./ft_atoi.o ./summator.o ./main.o

NAME = eval_expr

all:
	@gcc -c -Wall -Wextra -Werror $(SRCS) -I .
	@gcc -o $(NAME) -Wall -Wextra -Werror $(OSRCS) 

clean:
	@/bin/rm -f $(OSRCS)

fclean:	clean
	@/bin/rm -f $(NAME)

re: fclean all
