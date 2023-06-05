# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahkiler <ahkiler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 13:34:51 by jhwang2           #+#    #+#              #
#    Updated: 2023/05/28 15:12:33 by ahkiler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main
CC		=	c++
CFLAG	=	-Wall -Wextra -Werror
RM		=	rm -rf
SRCS	=	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			Intern.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp
OBJS	=	${SRCS:.c=.o}

all	:
	@$(MAKE) -j6 $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM)

fclean : clean
	@$(RM) $(NAME)

re :
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re