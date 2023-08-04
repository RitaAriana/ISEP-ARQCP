prog: array_sort1.o main.o
	gcc -Wall array_sort1.o main.o -o prog

array_sort1.o: array_sort1.c
	gcc -g -Wall -c array_sort1.c -o array_sort1.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o prog

run: prog
	./prog
