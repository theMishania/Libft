# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cocummin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 21:07:58 by cocummin          #+#    #+#              #
#    Updated: 2018/11/24 23:54:01 by cocummin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c -I. *.c
	@ar rc $(NAME) *.o

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
