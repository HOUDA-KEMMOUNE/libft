CFLAGS = -Wall -Wextra -Werror
NAME = result
OBJ = *.o
SRC = *.c

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $^ -o $@

$(OBJ): $(SRC)
	gcc -c $(CFLAGS)

.PHONY: clean
clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all