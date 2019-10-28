all: main.o linkedList.o
	gcc -o test main.o

linkedList.o: linkedList.c header.h
	gcc -c linkedList.c

main.o: main.c
	gcc -c main.c

run:
	./test

clean:
	rm *.o
	rm *~
