CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
OBJS = ft_isalpha.o

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
