CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c17

program: main.o studenter.o
	$(CC) $(CFLAGS) main.o studenter.o -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o program