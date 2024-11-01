CFLAGS = -Wall -Wextra -Werror
NAME = result
OBJ = *.o
SRC = *.c

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	@gcc -c $(CFLAGS) $(SRC)

.PHONY: clean
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all