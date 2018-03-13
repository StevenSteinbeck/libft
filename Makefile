# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stestein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 10:58:31 by stestein          #+#    #+#              #
#    Updated: 2018/03/12 18:59:31 by stestein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c)

OUT = $(patsubst %.c, %.o, $(SRCS))

INCLUDES = *.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c *.c -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
	gcc -Wall -Wextra -Werror -c *.c -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)


.PHONY: clean fclean re
