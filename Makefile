CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rsc $@ $^

.c.o :
	$(CC) -c -o $@ $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(TARGET)

re: fclean all

.PHONY : all clean fclean re
