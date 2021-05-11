# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stribuzi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/02 11:55:26 by stribuzi          #+#    #+#              #
#    Updated: 2021/05/11 10:47:44 by stribuzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

NASM = nasm

CC = gcc

NASM_FLAGS = -f macho64

SRCS = ft_strlen.s	\
		ft_strcpy.s	\
		ft_strcmp.s	\
		ft_write.s	\
		ft_read.s 	\
		ft_strdup.s

OBJS = $(SRCS:.s=.o)

%.o:	%.s
			$(NASM) $(NASM_FLAGS) $<

all:	$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS)

fclean:		clean
				rm -rf $(NAME) ./libasm

re:			fclean $(NAME)

test:	all	
	$(CC) $(OBJS) main.c -o libasm && ./libasm

.PHONY:		clean fclean re
