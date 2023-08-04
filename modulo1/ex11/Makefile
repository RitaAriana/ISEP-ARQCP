prog: palindrome.o main.o
	gcc -Wall palindrome.c main.o -o prog

palindrome.o: palindrome.c
	gcc -g -Wall -c palindrome.c -o palindrome.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o prog

run: prog
	./prog
