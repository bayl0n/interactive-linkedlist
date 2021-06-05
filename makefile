CC = gcc
CFLAGS = -Wall -Werror
DEP = utils.c

main.out: $(DEP) main.c
	$(CC) $(CFLAGS) -o main.out $(DEP) main.c -lm