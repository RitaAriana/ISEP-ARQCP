compileModules: copy_vec.c main.c
	gcc -c -g -Wall copy_vec.c -o copy_vec.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o copy_vec.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled