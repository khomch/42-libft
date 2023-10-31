# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:43:19 by akhomche          #+#    #+#              #
#    Updated: 2023/10/31 17:19:16 by akhomche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
AR = ar rcs
SRC = ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_strlen \
	ft_memset
SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))
.c.o: $(SRCS) $(BONUS_SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: clean all
.PHONY: all clean fclean re
