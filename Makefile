CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = *.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)

$(OBJ): $(SRC)
	@gcc -c $(CFLAGS) $(SRC)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
