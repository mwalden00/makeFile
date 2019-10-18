all: main.o functs.o
	gcc -o program main.o functs.o

main.o: main.c functs.h
	gcc -c main.c

functs.o: functs.c
	gcc -c functs.c