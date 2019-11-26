ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: parse.o
	$(CC) -o program parse.o

parse.o: parse.c
	$(CC) -c parse.c

run:
	./program

clean:
	rm *.o
	rm *.exe
	rm *.stackdump
