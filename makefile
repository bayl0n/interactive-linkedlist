CC = gcc
CFLAGS = -Wall -Werror

main.out: main.c
	$(CC) $(CFLAGS) -o main.out main.c -lm