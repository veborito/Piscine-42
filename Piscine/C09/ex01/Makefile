INCLUDES = includes/

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

TARGET = libft.a 

RM = rm -f

LIB = ar rcs

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

all: ${TARGET}

${TARGET}: ${OBJS}
			${LIB} ${TARGET} ${OBJS}

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${TARGET}

re: fclean all

.PHONY:	all re clean fclean
