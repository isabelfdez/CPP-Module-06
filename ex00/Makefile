# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 15:08:30 by isfernan          #+#    #+#              #
#    Updated: 2021/09/16 14:51:51 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= main.cpp	Display.cpp		is_type.cpp

OBJS 		= $(SRCS:.cpp=.o)

CXXFLAGS	= -Wall -Werror -Wextra

NAME		= Scalar_conversion

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(CXXFLAGS) -o $(NAME) $(OBJS) -std=c++98

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:			fclean all

test:
			./Scalar_conversion 37
			@echo ""
			./Scalar_conversion hello_world
			@echo ""
			./Scalar_conversion inf
			@echo ""
			./Scalar_conversion nan
			@echo ""
			./Scalar_conversion -inf
			@echo ""
			./Scalar_conversion +inff
			@echo ""
			./Scalar_conversion +++---++56
			@echo ""
			./Scalar_conversion 34028234663852885981170418348451692544000
			@echo ""
			./Scalar_conversion 3402823466385288598117041834845.9828392
			@echo ""
			./Scalar_conversion 1712381297129372837223984729384729348729347928374927349287349273947293847928374982734.9234

.PHONY: all clea fclean re test