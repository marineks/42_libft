# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msanjuan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 15:53:49 by msanjuan          #+#    #+#              #
#    Updated: 2021/05/28 12:01:01 by msanjuan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c	\
	   ft_isalnum.c		\
	   ft_isalpha.c		\
	   ft_isascii.c		\
	   ft_isdigit.c		\
	   ft_isprint.c		\
	   ft_toupper.c		\
	   ft_tolower.c		\
	   ft_strncmp.c		\
	   ft_strchr.c		\
	   ft_strrchr.c		\
	   ft_atoi.c		\
	   ft_strlcpy.c		\
	   ft_strnstr.c		\
	   ft_strlcat.c		\
	   ft_strdup.c		\
	   ft_memset.c		\

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CREATE = ar rcs

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}				

${NAME}: ${OBJS}
		@echo "Creating the libft wih the .o files..."
		${CREATE} ${NAME} ${OBJS}

run:	all
		@echo "Compiling and running the files..."
		${CC} ${CFLAGS} main.c -I. -L. -lft
		./a.out

all:	${NAME}

clean:
		${RM} ${OBJS} ${NAME} ./a.out

fclean: clean
		${RM} ${OBJS} ${NAME} ./a.out	

re: 	fclean run

.PHONY: all clean fclean re run
