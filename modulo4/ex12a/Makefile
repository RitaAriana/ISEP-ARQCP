main: main.o countBitsZero.o
	gcc -Wall -g main.o countBitsZero.o -o main

main.o: main.c countBitsZero.h
	gcc -Wall -g -c main.c -o main.o

countBitsZero.o: countBitsZero.c
	gcc -Wall -g -c countBitsZero.c -o countBitsZero.o

run: main
	./main

clean:
	rm *.o main
