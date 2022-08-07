#first parts 
SRC := main.c srcs/ft_exit.c srcs/ft_putstr_fd.c srcs/ft_strlen.c \
		srcs/ft_strrchr.c srcs/ft_strdup.c srcs/ft_strjoin.c srcs/ft_memcpy.c

CC = gcc

FLGS = -Wall -Werror -Wextra

HEADER = bbcp.h

NAME = bbcp


all :$(NAME)
	
$(NAME): $(SRC)
	@echo compiling
	@$(CC) $(FLGS) $(SRC) -o $(NAME)


fclean:
	@echo "cleaning every thing ..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus so re
