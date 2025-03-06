# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 07:36:31 by arabefam          #+#    #+#              #
#    Updated: 2025/03/06 13:08:33 by arabefam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	wizard
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra
OBJS		=	$(SRCS:.cpp=.o)
SRCS		=	main.cpp Wizard.cpp Student.cpp

all			:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all
