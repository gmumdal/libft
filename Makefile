CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_strjoin.c ft_striteri.c ft_atoi.c ft_strlcat.c ft_bzero.c ft_strlcpy.c ft_calloc.c ft_memchr.c ft_strlen.c ft_isalnum.c ft_memcmp.c ft_strmapi.c ft_isalpha.c ft_memcpy.c ft_strncmp.c ft_isascii.c ft_memmove.c ft_strnstr.c ft_isdigit.c ft_memset.c ft_strrchr.c ft_isprint.c ft_putchar_fd.c ft_strtrim.c ft_itoa.c ft_putendl_fd.c ft_substr.c ft_putnbr_fd.c ft_tolower.c ft_putstr_fd.c ft_toupper.c ft_split.c ft_strchr.c ft_strdup.c
OBJS = $(SRCS:.c=.o)
SRCS_B = ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c
OBJS_B = $(SRCS_B:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rsc $@ $(OBJS)

$(OBJS) :
	$(CC) $(CFLAGS) -c $(SRCS)

bonus : $(OBJS) $(OBJS_B)

$(OBJS_B) :
	$(CC) $(CFLAGS) -c $(SRCS_B)
	ar rsc $(NAME) $(OBJS_B)

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJS_B)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re
