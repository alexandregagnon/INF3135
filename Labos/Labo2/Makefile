all: clean hello.o
	gcc -o hello hello.o -lm

clean:
	rm -f hello.o
	rm -f hello

hello.o:
	gcc -c hello.c
