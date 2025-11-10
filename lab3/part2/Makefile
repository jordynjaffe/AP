

CC = gcc
CFLAGS = -g -Wall -Wpedantic -std=c17
LDFLAGS =
LDLIBS = -L../part1 -lmylist  

INCFLAGS = -I../part1

revecho: revecho.o
	$(CC) -o revecho revecho.o $(LDFLAGS) $(LDLIBS)

revecho.o: revecho.c
	$(CC) $(CFLAGS) $(INCFLAGS) -c -o revecho.o revecho.c

clean:
	rm -f revecho revecho.o
.PHONY: all
all: clean revecho
