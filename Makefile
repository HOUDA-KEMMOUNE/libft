CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = *.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

exe: all
	gcc $(CFLAGS) $(SRC) -o result

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)

$(OBJ): $(SRC)
	@gcc -c $(CFLAGS) $(SRC)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) result

re: fclean all
