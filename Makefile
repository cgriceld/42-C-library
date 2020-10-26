NAME = libft.a

INCLUDE = ./
SRC = ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c ft_strchr.c ft_strrchr.c \
	ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
	ft_strnstr.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c 

OBJ = $(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -I$(INCLUDE) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re