CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = my_program
SRCS = main.c ft_strs_to_tab.c ft_show_tab.c
OBJS = $(SRCS:.c=.o)
HEADER = ft_stock_str.h

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)