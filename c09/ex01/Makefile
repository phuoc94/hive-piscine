CC = cc

CFLAGS += -Wall -Wextra -Werror

SRC_DIR = srcs

INC_DIR = includes

SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRC_PATH = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

SRC_HEADERS = ft.h

OBJS = $(SRC_PATH:.c=.o)

HEADERS = $(addprefix $(INC_DIR)/, $(SRC_HEADERS))

NAME = libft.a

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -I$(INC_DIR) -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
