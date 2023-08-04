compileModules: find_all_words.c main.c
	gcc -c -g -Wall find_all_words.c -o find_all_words.o
	gcc -c -g -Wall main.c -o main.o

compileAll: compileModules
	gcc -g -Wall main.o find_all_words.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o

clean:
	rm -f *.o mainCompiled