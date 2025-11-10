

CC = gcc
CFLAGS = -g -Wall -Wpedantic -std=c17
LDFLAGS = 
LDLIBS = -L../../lab3/solutions/part1 -lmylist

INCFLAGS = -I../../lab3/solutions/part1

mdb-lookup: mdb-lookup.o
	$(CC) -o mdb-lookup mdb-lookup.o $(LDFLAGS) $(LDLIBS)

mdb-lookup.o: mdb-lookup.c
	$(CC) $(CFLAGS) $(INCFLAGS) -c -o mdb-lookup.o mdb-lookup.c

.PHONY: clean
clean: 
	rm -f mdb-lookup mdb-lookup.o
