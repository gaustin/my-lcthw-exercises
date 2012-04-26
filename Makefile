CFLAGS=-Wall -g
CC=cc

all: ex1 ex2 ex3

ex1:
	$(CC) $(CFLAGS) ex1.c -o ex1

ex2:
	$(CC) $(CFLAGS) ex2.c -o ex2

ex3:
	$(CC) $(CFLAGS) ex3.c -o ex3

clean:
	rm -f ex1 ex2 ex3
