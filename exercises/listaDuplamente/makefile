CC=gcc

CFLAGS=-c -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

all : main 

main : listaDupla.o main.o
	$(CC) listaDupla.o main.o -o main

main.o : main.c
	$(CC) $(CFLAGS) main.c

listaSimples.o : listaDupla.c listaDupla.h
	$(CC) $(CFLAGS) listaDupla.c

clean : 
	rm *.o main
