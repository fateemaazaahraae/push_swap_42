# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 09:47:48 by fbazaz            #+#    #+#              #
#    Updated: 2024/04/26 09:56:39 by fbazaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ./mandatory/check.c ./mandatory/main.c ./mandatory/parcing.c ./mandatory/operations/push.c ./mandatory/operations/swap.c ./mandatory/operations/rotate.c
SRC += ./mandatory/operations/reverse_rotate.c ./utils/ft_atoi.c ./utils/ft_isdigit.c ./utils/ft_split.c ./utils/ft_strdup.c ./utils/ft_strjoin.c ./utils/ft_strlen.c
SRC += ./utils/ft_lstadd_back.c ./utils/ft_lstlast.c ./utils/ft_lstnew.c ./utils/ft_lstsize.c

SRC_BONUS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_BONUS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_BONUS)

clean :
	rm -rf $(SRC_BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re