# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 12:21:32 by miguelbelo        #+#    #+#              #
#    Updated: 2022/10/12 12:34:09 by miguelbelo       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c \
			ft_isprint.c	ft_strlen.c		ft_toupper.c	ft_tolower.c \
			ft_strrchr.c

OBJS	= ${SRCS:.c=.o} #to study


CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
AR	= ar rcs #to study

all:$(NAME)

#to study
.c.o:
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
	@${AR} ${NAME} ${OBJS}
	echo "LIBFT OK"

clean:
	@${RM} ${OBJS}