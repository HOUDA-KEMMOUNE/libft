CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	  ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	  ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
	  ft_toupper.c main.c

OBJ = $(SRC:.c=.o)
B_SRC = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c \
	  	ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c
	
B_OBJ = $(OBJ:.c=.o)

all: $(NAME)

exe: all
	@gcc $(CFLAGS) $(SRC) $(B_SRC) -o result

$(NAME): $(OBJ)
	@ar rcs $@ $(OBJ)

%.o: %.c
	@gcc -c $(CFLAGS) $< -o $@

bonus: $(OBJ) $(B_OBJ)
	@ar rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME) result

re: fclean all
