NAME = rush-02

SOURCES = check_arr.c ej_realloc.c ft_atoi.c ft_strlen.c ft_strstr.c main.c print_arr.c print_str.c make_arr.c make_str.c

OBJECTS = $(SOURCES:.c=.o)

$(NAME):
	cc -Wall -Wextra -Werror -o $(NAME) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)