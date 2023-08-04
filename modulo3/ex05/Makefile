main: main.o asm.o asm2.0
	gcc -g main.o asm.o asm2.o -o mainCompiled.o

main.o: main.c asm.h
	gcc -Wall -g -c main.c -o main.o

asm.o: asm.s
	gcc -Wall -g -c asm.s -o asm.o

asm2.o: asm2.s
	gcc -Wall -g -c asm2.s -o asm2.o

run: main
	./mainCompiled.o

clean:
	rm *.o
