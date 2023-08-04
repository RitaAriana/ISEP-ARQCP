compileModules: power_ref.c main.c
	gcc -c -g -Wall power_ref.c -o power_ref.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o power_ref.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled