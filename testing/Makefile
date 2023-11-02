# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:43:19 by akhomche          #+#    #+#              #
#    Updated: 2023/11/02 18:26:37 by akhomche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = test
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
LIBFT_PATH =  "../"
$(NAME): make_libft
	$(CC) $(CFLAGS) -o $(NAME) $(LIBFT_PATH)*.o main.c
make_libft:
	make -C $(LIBFT_PATH)
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: clean all
.PHONY: all clean fclean re
