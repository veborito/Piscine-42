#!//bin/sh

gcc -Wall -Wextra -Werror -c ft_putstr.c ft_putchar.c ft_swap.c ft_strlen.c ft_strcmp.c 
ar rc libft.a ft_putstr.o ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o
ranlib libft.a
