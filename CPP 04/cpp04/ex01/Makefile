# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhwang2 <jhwang2@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 13:34:51 by jhwang2           #+#    #+#              #
#    Updated: 2023/08/17 21:20:35 by jhwang2          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	main
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM			=	rm -rf
SRCS		=	main.cpp \
				Animal.cpp \
				Brain.cpp \
				Dog.cpp \
				Cat.cpp
OBJS		=	${SRCS:.cpp=.o}

all	:
	$(MAKE) -j6 $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re