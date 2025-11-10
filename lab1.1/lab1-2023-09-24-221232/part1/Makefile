CC = gcc
CFLAGS = -Wall -std=c17

main: prime.o gcd.o

prime.o: prime.c prime.h
gcd.o: gcd.c gcd.h

.PHONY: clean
clean:
	rm -f *.o a.out core main

.PHONY: all
all: clean main


