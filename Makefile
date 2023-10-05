CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
SRCS =  ft_isalpha.c ft_isprint.c ft_memset.c  ft_strlen.c ft_bzero.c   ft_isascii.c ft_memcpy.c  ft_strlcat.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcpy.c
OBJS = ${SRCS:.c=.o}

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rsc $@ $^

%.o : %.c
	$(CC) -c $^ -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(TARGET)

re: fclean all

.PHONY : all clean fclean re
