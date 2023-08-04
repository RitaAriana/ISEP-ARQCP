compileModules: frequencies.c main.c
	gcc -c -g -Wall frequencies.c -o frequencies.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o frequencies.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled