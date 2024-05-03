# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 09:47:48 by fbazaz            #+#    #+#              #
#    Updated: 2024/05/01 10:22:46 by fbazaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ./mandatory/check.c ./mandatory/main.c ./mandatory/parcing.c ./mandatory/sort_less5.c ./mandatory/sort_more5.c
SRC += ./mandatory/operations/push.c ./mandatory/operations/swap.c ./mandatory/operations/rotate.c ./mandatory/operations/reverse_rotate.c
SRC += ./utils/ft_atoi.c ./utils/ft_isdigit.c ./utils/ft_split.c ./utils/ft_strdup.c ./utils/ft_strjoin.c ./utils/ft_strlen.c
SRC += ./utils/ft_lstadd_back.c ./utils/ft_lstlast.c ./utils/ft_lstnew.c ./utils/ft_lstsize.c ./utils/utils.c

SRC_BONUS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_BONUS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_BONUS)
	@clear

clean :
	rm -rf $(SRC_BONUS)
	@clear

fclean : clean
	rm -rf $(NAME)
	@clear

re : fclean all

.PHONY : all clean fclean re