prog: upper2.o main.o
	gcc -Wall upper2.o main.o -o prog

upper2.o: upper2.c
	gcc -g -Wall -c upper2.c -o upper2.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o prog

run: prog
	./prog
