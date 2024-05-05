# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 09:47:48 by fbazaz            #+#    #+#              #
#    Updated: 2024/05/05 12:20:56 by fbazaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =  ./mandatory/main.c ./mandatory/parcing.c ./mandatory/sort_less5.c ./mandatory/sort_more5.c
SRC += ./mandatory/operations/push.c ./mandatory/operations/swap.c ./mandatory/operations/rotate.c ./mandatory/operations/reverse_rotate.c
SRC += ./utils/list_utils.c ./utils/utils.c ./utils/ft_atoi.c ./utils/ft_isdigit.c ./utils/ft_split.c ./utils/check.c

SRC_BONUS = ./bonus/main_bonus.c ./bonus/parcing_bonus.c ./bonus/gnl/get_next_line.c ./bonus/gnl/get_next_line_utils.c
SRC_BONUS += ./utils/list_utils.c ./utils/utils.c ./utils/ft_atoi.c ./utils/ft_isdigit.c ./utils/ft_split.c ./utils/check.c
SRC_BONUS += ./bonus/op_bonus/push_bonus.c ./bonus/op_bonus/swap_bonus.c ./bonus/op_bonus/rotate_bonus.c ./bonus/op_bonus/reverse_rotate_bonus.c ./utils/ft_strcmp.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@clear

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BONUS)
	@clear

clean :
	rm -rf $(OBJ) $(OBJ_BONUS)
	@clear

fclean : clean
	rm -rf $(NAME) $(NAME_BONUS)
	@clear

re : fclean all

.PHONY : all clean fclean re