##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## dazd
##

SRC	=	main.c 	\
		my_putchar.c 	\
		my_put_nbr_str.c \
		lrule.c 	\
		my_strlen.c	\
		my_strdup.c	\
		my_strcpy.c	\
		my_printf.c	\
		sort_list.c \
		my_strcmp.c \
		ls_norule.c \

TESTS     =       my_putchar.c    \
                my_put_nbr_str.c \
                lrule.c         \
                my_strlen.c     \
                my_strdup.c     \
                my_strcpy.c     \
                my_printf.c     \
                sort_list.c \
                my_strcmp.c \
		tests/test_ls.c	\
		ls_norule.c	\


NAME	= my_ls

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -f $(OBJ)

tests_run:
	gcc -o unit_tests $(TESTS) -lcriterion --coverage
	./unit_tests

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean tests_run fclean re

