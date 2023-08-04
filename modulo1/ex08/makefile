compileModules: array_sort2.c main.c
	gcc -c -g -Wall array_sort2.c -o array_sort2.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o array_sort2.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled