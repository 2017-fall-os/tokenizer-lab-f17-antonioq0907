all: test

CFLAGS=-g -O3

test: mytoc.o test.o
	cc -o $@ $^

test.o: test.c mytoc.h
	cc -c $(CFLAGS) test.c

mytoc.o: mytoc.c mytoc.h
	cc -c $(CFLAGS) mytoc.c

clean: 
	rm -f *.o 

demo: test
	./test

