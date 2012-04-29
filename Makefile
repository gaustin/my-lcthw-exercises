CFLAGS=-Wall -g
CC=cc

all: ex1 ex2 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11 ex12 ex13
	
ex1: ex1.c
	$(CC) $(CFLAGS) ex1.c -o ex1

ex2: ex2.c
	$(CC) $(CFLAGS) ex2.c -o ex2

ex3: ex3.c
	$(CC) $(CFLAGS) ex3.c -o ex3

ex4: ex4.c
	$(CC) $(CFLAGS) ex4.c -o ex4

ex5: ex5.c
	$(CC) $(CFLAGS) ex5.c -o ex5

ex6: ex6.c
	$(CC) $(CFLAGS) ex6.c -o ex6

ex7: ex7.c
	$(CC) $(CFLAGS) ex7.c -o ex7

ex8: ex8.c
	$(CC) $(CFLAGS) ex8.c -o ex8

ex9: ex9.c
	$(CC) $(CFLAGS) ex9.c -o ex9

ex10: ex10.c
	$(CC) $(CFLAGS) ex10.c -o ex10

ex11: ex11.c
	$(CC) $(CFLAGS) ex11.c -o ex11

ex12: ex12.c
	$(CC) $(CFLAGS) ex12.c -o ex12

ex13: ex13.c
	$(CC) $(CFLAGS) ex13.c -o ex13

clean:
	rm -rf ex1 ex2 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11 ex12 ex13 *.dSYM
