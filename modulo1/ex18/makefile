compileModules: compress_shorts.c main.c
	gcc -c -g -Wall compress_shorts.c -o compress_shorts.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o compress_shorts.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled