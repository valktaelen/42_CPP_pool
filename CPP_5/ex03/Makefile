# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aartiges <aartiges@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 14:27:07 by aartiges          #+#    #+#              #
#    Updated: 2022/05/04 13:04:49 by aartiges         ###   ########lyon.fr    #
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

SRC_GLOBAL		=	Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp \
					RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
DIR_GLOBAL		=	.
HD_GLOBAL		=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
					RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

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
	@rm -rf *_shrubbery

fclean:	clean
	@printf "\tSuppression $(COLOR_RED)$(NAME)\$(COLOR_NORM)\n"	
	@rm -rf $(NAME)

re:	fclean all

$(NAME)	:	$(DIR_OBJ)	$(OBJS)	$(MK)
	@printf "\n\tCompilation de $(COLOR_PURPLE)$(NAME)\$(COLOR_NORM)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
