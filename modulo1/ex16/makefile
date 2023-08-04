compileModules: where_exists.c main.c
	gcc -c -g -Wall where_exists.c -o where_exists.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o where_exists.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled