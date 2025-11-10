# Makefile for lab 4 part 1

CC = gcc
CFLAGS = -g -Wall -I../../lab3/part1
LDFLAGS = -g -L../../lab3/part1
LDLIBS = -lmylist

.PHONY: default
default: mdb-add mdb-lookup 

mdb-lookup: mdb.o

mdb-add: mdb.o

mdb-add.o: mdb.h

mdb-lookup.o: mdb.h

mdb.o: mdb.h

.PHONY: clean
clean:
	rm -f *.o *~ a.out mdb-add mdb-lookup

.PHONY: all
all: clean default
