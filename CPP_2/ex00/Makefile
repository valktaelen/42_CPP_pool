# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 05:54:40 by aartiges          #+#    #+#              #
#    Updated: 2022/04/21 06:54:21 by aartiges         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

################################################################################
##                               Présentation                                 ##
################################################################################

COLOR_NORM		=	\033[0m
COLOR_RED		=	\033[31m
COLOR_PURPLE	=	\033[35m

################################################################################
##                               SRCS                                         ##
################################################################################

SRC_GLOBAL		=	Fixed.cpp main.cpp
DIR_GLOBAL		=	.
HD_GLOBAL		=	Fixed.hpp

MK				=	Makefile

################################################################################
##                       Compilation Environnement                            ##
################################################################################

NAME		=	exec
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRCS		=	$(addprefix $(DIR_GLOBAL)/, $(SRC_GLOBAL))
DIR_OBJ		=	obj
OBJS		=	$(addprefix $(DIR_OBJ)/, $(notdir $(SRCS:.cpp=.o)))
HDS			=	$(HD_GLOBAL)

################################################################################
##                                 Règles                                     ##
################################################################################

all	:	$(NAME)

$(DIR_OBJ)/%.o:	$(DIR_GLOBAL)/%.cpp	$(HDS) $(MK)
	@printf "\r\033[K\tCompilation de $(COLOR_PURPLE)$< ==> $@\$(COLOR_NORM)"
	@$(CC) $(CFLAGS) -c -o $@ $<
	@sleep 0.1

$(DIR_OBJ)	:
	@printf "\tCréation $(COLOR_PURPLE)obj/$(COLOR_NORM)\n"
	@mkdir $(DIR_OBJ)

clean:
	@printf "\tSuppression $(COLOR_RED)objets/$(COLOR_NORM)\n"
	@rm -rf $(DIR_OBJ)

fclean:	clean
	@printf "\tSuppression $(COLOR_RED)$(NAME)\$(COLOR_NORM)\n"	
	@rm -rf $(NAME)

re:	fclean all

$(NAME)	:	$(DIR_OBJ)	$(OBJS)	$(MK)
	@printf "\n\tCompilation de $(COLOR_PURPLE)$(NAME)\$(COLOR_NORM)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
