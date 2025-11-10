


CC = gcc
CFLAGS = -g -Wall -Wpedantic -std=c17
LDFLAGS =
LDLIBS = 



mylist: mylist-test.o libmylist.a
	$(CC) -o mylist mylist-test.o libmylist.a

libmylist.a: mylist.o
	ar rcs libmylist.a mylist.o


mylist.o: mylist.c mylist.h

mylist-test.o: mylist-test.c mylist.h

.PHONY: clean
clean: 
	rm -f *.o a.out core mylist libmylist.a

.PHONY: all
all:
	clean mylist libmylist.a


