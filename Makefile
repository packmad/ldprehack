CFLAGS=-Wall -pedantic -O3
CC=gcc

all: ldprehack32 ldprehack64

ldprehack32: ldprehack.c
	$(CC) $(CFLAGS) -m32 -fPIC -c $< -o $@.o 
	$(CC) -m32 -shared -o $@.so $@.o -ldl

ldprehack64: ldprehack.c
	$(CC) $(CFLAGS) -m64 -fPIC -c $< -o $@.o 
	$(CC) -m64 -shared -o $@.so $@.o -ldl

clean:
	rm *.so
	rm *.o

