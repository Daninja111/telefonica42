CC = gcc

DEPS = get_next_line.h

NAME = test

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $<

$(NAME): get_next_line_utils.c get_next_line.c main.c
	$(CC) -Wall -Wextra -Werror -g -o test get_next_line_utils.c get_next_line.c main.c

clean:
	rm -f $(OBJS) $(NAME)