CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_tolower.c ft_isalpha.c ft_memset.c  ft_strlen.c  ft_toupper.c ft_isascii.c ft_memcmp.c  ft_strchr.c  ft_strncmp.c ft_bzero.c   ft_isdigit.c ft_memcpy.c  ft_strlcat.c ft_strrchr.c ft_memchr.c
OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	ar rsc $@ $^

%.o : %.c
	$(CC) -c $^ -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
