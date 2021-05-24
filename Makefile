# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 15:53:49 by msanjuan          #+#    #+#              #
#    Updated: 2021/05/21 17:52:42 by msanjuan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

// creer un libft.a qui contient les .o mais aussi .h et Makefile!
compile_all:
	gcc -c -o:w  -Wall -Werror -Wextra *.c

create_lib:
	ar -crs libft.a *.o

all: compile_all create_lib

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)	

re: fclean all
