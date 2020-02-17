# Makefile for Rush02

SRCS	= main.c ft_string.c ft_manager.c ft_output.c ft_judge_line.c ft_find.c ft_validate.c ft_utility.c ft_divide.c

OBJS	= ${SRCS:.c=.o}

INCLUDES	= common.h ft_string.h ft_output.h ft_judge_line.h ft_utility.h

NAME	= rush.a

EXE		= rush-02

GCC		= gcc
RM		= rm -f

GFLAGS	= -Wall -Wextra -Werror

.c.o:
		${GCC} ${GFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} ${INCLUDES}
		ar rc	${NAME} ${OBJS}
		${GCC} ${GFLAGS} ${NAME} -o ${EXE}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME} ${EXE}

re: fclean all

.PHONY:		all clean fclean re

