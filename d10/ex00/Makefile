# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 09:58:32 by ksonu             #+#    #+#              #
#    Updated: 2017/07/10 11:43:53 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = src/ft_*.c
HEADER = ./include/

all:  $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADER) -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean: 
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: 
	fclean all
