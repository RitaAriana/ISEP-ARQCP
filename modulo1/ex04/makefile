compileModules: upper1.c main.c
	gcc -c -g -Wall upper1.c -o upper1.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o upper1.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled