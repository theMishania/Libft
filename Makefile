# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cocummin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 21:07:58 by cocummin          #+#    #+#              #
#    Updated: 2018/11/21 19:00:33 by cocummin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c -I libft.h *.c
	@ar rc $(NAME) *.o

clean:
	@/bin/rm -f *.o

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
