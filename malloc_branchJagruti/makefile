all:main

main:main.o mymalloc.o
	gcc -o main main.o mymalloc.o

main.o:
	gcc -I . -c main.c

mymalloc.o:mymalloc.h
	gcc -c mymalloc.c

clean:
	rm main *.o
