compileModules: capitalize.c main.c
	gcc -c -g -Wall capitalize.c -o capitalize.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o capitalize.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled