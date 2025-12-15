CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=calc
SRCS=starter.c suma.c resta.c mult.c div.c
SRCS_TEST=test_challenge04.c suma.c resta.c mult.c div.c
OBJS=$(SRCS:.c=.o)
TEST=test_challenge04

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all

test: $(SRCS_TEST)
	$(CC) $(CFLAGS) -o $(TEST)  $(SRCS_TEST)
	./$(TEST)
