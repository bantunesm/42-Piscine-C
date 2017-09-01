# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bantunes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 19:27:47 by bantunes          #+#    #+#              #
#    Updated: 2017/08/21 21:11:41 by bantunes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOM = libft.a
RACINE = ./srcs/
HEADERS = ./includes/
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I$(HEADERS)
SOURCES = $(RACINE)ft_putchar.c $(RACINE)ft_putstr.c $(RACINE)ft_strcmp.c $(RACINE)ft_strlen.c $(RACINE)ft_swap.c
FICHIERS_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NOM)

$(NOM) :
	gcc $(FLAGS) $(OPTIONS) $(SOURCES)
	ar rc $(NOM) $(FICHIERS_O)
	ranlib $(NOM)

clean :
	/bin/rm -f $(FICHIERS_O)
	
fclean :
	/bin/rm -f $(FICHIERS_O)
	/bin/rm -f $(NOM)

re : fclean all
