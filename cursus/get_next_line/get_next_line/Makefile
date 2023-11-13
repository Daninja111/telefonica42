CC = gcc

DEPS = get_next_line.h

NAME = test

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $<

$(NAME): get_next_line.c main.c
	$(CC) -g -o test get_next_line.c main.c

clean:
	rm -f $(OBJS) $(NAME)