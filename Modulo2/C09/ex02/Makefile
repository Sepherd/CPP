# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 16:15:00 by arecce            #+#    #+#              #
#    Updated: 2024/06/27 23:08:47 by sepherd          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CC = c++

HEADER = includes
CFLAGS = -Wextra -Wall -Werror -std=c++98 -I$(HEADER)

SRC = main.cpp src/PmergeMe.cpp
 
OBJ = $(SRC:.cpp=.o)

# GREEN = \033[1;32m
# RED = \033[1;31m
# BLU = \033[1;34m
# YEL = \033[1;33m
# WHT = \033[1;37m
# EOC = \033[1;0m

all: $(NAME)

%.o: %.cpp
		@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		@echo "\033[1;34mCompiling EX02...\033[1;0m"
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "\033[1;32mEX02 build completed.\033[1;0m"

clean:
		@echo "\033[1;33mCleaning...\033[1;0m"
		@rm -f $(OBJ)
		@echo "\033[1;31mClean!\033[1;0m"

fclean: clean
		@echo "\033[1;33mCleaning executable...\033[1;0m"
		@rm -f $(NAME)
		@echo "\033[1;31mCompletely clean!\033[1;0m"

re: fclean all

.PHONY: all re clean fclean