mainCompiled: main.o asm.o f.o f2.o f3.o f4.o
	gcc -g main.o asm.o f1.o f2.o f3.o f4.o -o mainCompiled.o

main.o: main.c asm.h
	gcc -Wall -g -c main.c -o main.o

asm.o: asm.s
	gcc -Wall -g -c asm.s -o asm.o

f.o: f.c
	gcc -Wall -g -c f.c -o f.o

f2.o: f2.c
	gcc -Wall -g -c f2.c -o f2.o

f3.o: f3.c
	gcc -Wall -g -c f3.c -o f3.o

f4.o: f4.c
	gcc -Wall -g -c f4.c -o f4.o

run: mainCompiled
	./mainCompiled.o

clean:
	rm *.o
