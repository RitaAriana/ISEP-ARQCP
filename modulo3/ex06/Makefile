main: main.o asm.o
	gcc -g main.o asm.o -o mainCompiled.o

main.o: main.c asm.h
	gcc -Wall -g -c main.c -o main.o

asm.o: asm.s
	gcc -Wall -g -c asm.s -o asm.o

run: main
	./mainCompiled.o

clean:
	rm *.o
