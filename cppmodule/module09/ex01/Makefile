# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:15:32 by mgruson           #+#    #+#              #
#    Updated: 2023/05/24 14:54:57 by mgruson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY : all norm clean fclean re

CXX := c++
CXXFLAGS := -std=c++98 -g3 -Wall -Wextra -Werror -MMD -MP -I src/ 
#CXXFLAGS += -fsanitize=address
SRC_DIR := src/
OBJ_DIR := obj/
RM := rm
VAL := valgrind --leak-check=full --track-origins=yes

SRCS =	main.cpp RPN.cpp

SOFT_NAME := RPN

OBJS = $(SRCS:%.cpp=%.o)
SRC = $(addprefix $(SRC_DIR),$(SRCS))
OBJ = $(addprefix $(OBJ_DIR),$(OBJS))
DEP = $(OBJ:%.o=%.d)
OBJF := ${OBJ_DIR}.cache_exists

all : ${SOFT_NAME}

${OBJ_DIR}%.o : $(SRC_DIR)%.cpp $(OBJF) Makefile
	${CXX} ${CXXFLAGS} -c $< -o $@

$(OBJF) :
	@mkdir -p ${OBJ_DIR}
	@touch ${OBJF}

${SOFT_NAME} : ${OBJ}
	${CXX} ${OBJ} ${CXXFLAGS} -o ${SOFT_NAME}

-include ${DEP}

clean : 
	${RM} -rf ${OBJ_DIR} ${OBJF}

fclean : clean
	${RM} -f ${SOFT_NAME}

re : fclean all