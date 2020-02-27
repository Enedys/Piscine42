# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwillum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 17:02:38 by kwillum           #+#    #+#              #
#    Updated: 2020/02/10 19:30:59 by kwillum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OSRCS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

HEADER = includes/

NAME = libft.a

all:
	gcc -c -Wall -Wextra -Werror $(SRCS) -I$(HEADER)
	ar rc $(NAME) $(OSRCS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OSRCS)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
