prog: array_sort2.o sort_without_reps.o main.o
	gcc -Wall array_sort2.o sort_without_reps.o main.o -o prog

array_sort2.o: array_sort2.c
	gcc -g -Wall -c array_sort2.c -o array_sort2.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o prog

run: prog
	./prog