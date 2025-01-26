# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emilin <emilin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 13:26:33 by esimpson          #+#    #+#              #
#    Updated: 2025/01/26 14:04:48 by emilin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animalBrain

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

# color codes
RESET		=	\033[0m
GREEN		=	\033[32m

#directories
SRC_DIR = ./
OBJ_DIR = obj/

#source files
SRC_FILES	= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ_FILES	= $(SRC_FILES:%.cpp=%.o)

#paths
SRC = $(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)SUCCESSFULLY MADE $(words $(OBJ)) object files$(RESET)"

#compile objects
$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp 
	@mkdir -p $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	fi; 

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -rf $(NAME); \
	fi;

re: fclean all