CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c17

program: main.o studenter.o grade.o
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o program