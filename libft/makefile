NAME := exec
OBJFILES := main.o
CFLAGS = -Wall -Werror -Wextra

all: $(NAME) run

$(NAME): $(OBJFILES)
	$(CC) $(LDFLAGS) -o $@ $^

run:
	./$(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all