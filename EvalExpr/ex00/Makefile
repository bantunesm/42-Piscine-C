# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bantunes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 23:21:38 by bantunes          #+#    #+#              #
#    Updated: 2017/08/27 23:21:56 by bantunes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAG = -Wall -Werror -Wextra
FILES = calculate.c eval_expr.c eval_to_btree.c node.c printers.c btree_create_node.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) main.c $(FILES)

clean:
	/bin/rm -f eval_expr

fclean: clean

re: fclean all
