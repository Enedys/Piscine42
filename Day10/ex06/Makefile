# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwillum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 17:02:38 by kwillum           #+#    #+#              #
#    Updated: 2020/02/11 23:10:12 by kwillum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_operations.c

FLAGS = -Wall -Wextra -Werror

HEADER = includes/

NAME = do-op

all:
	@gcc -o $(NAME) $(FLAGS) $(SRCS) -I$(HEADER) do_op.c

clean:
	@/bin/rm -f $(NAME)
