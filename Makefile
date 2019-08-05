# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oorlov <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/01 09:03:30 by oorlov            #+#    #+#              #
#    Updated: 2019/08/01 09:03:31 by oorlov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = oorlov.filler

INCL = filler.h

SRC =	main.c \
		map.c \
		result.c \
		algorith.c \
		help.c \
		fsqrt.c 

all : $(NAME)

$(NAME):
	@gcc -I $(INCL) $(SRC) libftprintf.a libft/libft.a -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all
