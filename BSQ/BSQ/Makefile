# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwillum <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 17:02:38 by kwillum           #+#    #+#              #
#    Updated: 2020/02/18 01:47:03 by kwillum          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ./srcs/*.c ./main.c

OSRCS = ./*.o

NAME = bsq

all:
	@gcc -c -Wall -Wextra -Werror $(SRCS) -I .
	@gcc -o $(NAME) -Wall -Wextra -Werror $(OSRCS) 

clean:
	@/bin/rm -f $(OSRCS)

fclean:	clean
	@/bin/rm -f $(NAME)

re: fclean all
