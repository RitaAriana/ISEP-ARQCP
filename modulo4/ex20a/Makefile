main: main.o sum_multiples.o
	gcc -Wall -g main.o sum_multiples.o -o main

main.o: main.c sum_multiples.h
	gcc -Wall -g -c main.c -o main.o

sum_multiples.o: sum_multiples.c
	gcc -Wall -g -c sum_multiples.c -o sum_multiples.o

run: main
	./main

clean:
	rm *.o main
