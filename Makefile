NAME = libft.a

HEADER = libft.h

SRC = ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_strchr.c \
	ft_strrchr.c ft_strlcpy.c ft_strlcat.c \
	ft_strncmp.c ft_strendcmp.c ft_strnstr.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_atoi.c ft_intlen.c ft_uintlen.c ft_strdup.c ft_calloc.c \
	ft_itoa.c ft_itoahex.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_strmapi.c ft_split.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c \
	get_next_line.c get_next_line_utils.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c \

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(OBJ) $(SRC_BONUS:.c=.o)

%.o : %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ar rc $@ $(OBJ)
	@ranlib $@

bonus : $(OBJ_BONUS) $(HEADER)
	@ar rc $(NAME) $(OBJ_BONUS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ_BONUS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# %.o : %.c
        #$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@
# pattern rule predefined in make - how to make .o file from .c
# ‘%.c’ expands to ‘test.c’
# automatic variables scope : only have values within the recipe
# ‘$@’ and ‘$<’ to substitute the names of the target file and the source file in each case where the rule applies

# string substitution
# For example, you might have a list of object files: objects = foo.o bar.o baz.o
# To get the list of corresponding source files, you could simply write: $(objects:.o=.c)
# ‘$(var:a=b)’ - take the value of the variable var, replace every a at the end with b
# foo := a.o b.o c.o
# bar := $(foo:.o=.c) sets ‘bar’ to ‘a.c b.c c.c’

# if no #include at the top of the file, will use -I$(HEADER)