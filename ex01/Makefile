# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 12:32:31 by esimpson          #+#    #+#              #
#    Updated: 2024/11/25 16:34:46 by esimpson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -pedantic -std=c++98

# color codes
RESET		=	\033[0m
GREEN		=	\033[32m

#directories
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = includes/

#source files
SRC_FILES	= main.cpp Contact.cpp PhoneBook.cpp
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
	@$(CC) -c $(CFLAGS)  -I $(INC_DIR) $< -o $@

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	fi; 

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -rf $(NAME); \
	fi;

re: fclean all