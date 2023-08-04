compileModules: odd_sum.c main.c
	gcc -c -g -Wall odd_sum.c -o odd_sum.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o odd_sum.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled