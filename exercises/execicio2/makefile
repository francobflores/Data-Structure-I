CC=gcc

CFLAGS=-c -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

all : main 

main : listaSimples.o main.o
	$(CC) listaSimples.o main.o -o main

main.o : main.c
	$(CC) $(CFLAGS) main.c

listaSimples.o : listaSimples.c listaSimples.h
	$(CC) $(CFLAGS) listaSimples.c

clean : 
	rm *.o main

