CC=gcc
CFLAGS=-Wall -g -ansi -pedantic

tp1: test.o tp1.o
	$(CC) -o tp1 test.o tp1.o $(CFLAGS)

test.o: test.c
	$(CC) -c test.c $(CFLAGS)

tp1.o: tp1.c tp1.h
	$(CC) -c tp1.c $(CFLAGS)

clean:
	rm -rf *.o tp1
