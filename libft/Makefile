# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 16:22:29 by qbonvin           #+#    #+#              #
#    Updated: 2021/11/23 11:38:37 by qbonvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Declaration de mes variables
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS = ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = ${SRCS:.c=.o}
OBJBONUS = ${BONUS:.c=.o}
# fin de la declatation des variables

all : ${NAME}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

bonus : ${OBJ} ${OBJBONUS}
	ar rc ${NAME} ${OBJ} ${OBJBONUS}
	ranlib ${NAME}

clean :
	rm -rf ${OBJ} ${OBJBONUS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : clean fclean re all 