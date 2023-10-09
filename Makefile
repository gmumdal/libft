CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS_B = ft*_bonus.c
OBJS_B = ft*_bonus.o
SRCS = $(filter-out $(wildcard *_bonus.c), $(wildcard ft*.c))
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rsc $@ $(OBJS)

bonus :
	$(CC) $(CFLAGS) -c $(SRCS_B)
	ar rsc $(NAME) $(OBJS_B)

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJS_B)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re
