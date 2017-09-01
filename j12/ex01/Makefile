# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bantunes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/24 14:43:17 by bantunes          #+#    #+#              #
#    Updated: 2017/08/24 17:13:45 by bantunes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOM = ft_display_file

FICHIER_SOURCE = ./ft_display_file.c

FICHIER_SORTIE = ./ft_display_file.o

HEADER = ft_display_file.h

FLAGS = -Wall -Wextra -Werror

OPTIONS = -c


all: $(NOM)

$(NOM) :
		gcc $(FLAGS) $(OPTIONS) $(FICHIER_SOURCE)
		gcc $(FICHIER_SORTIE) -o $(NOM)

clean:
		rm -f $(FICHIER_SORTIE)

fclean:
		rm -f $(FICHIER_SORTIE)
		rm -f $(NOM)

re: 
		fclean all
