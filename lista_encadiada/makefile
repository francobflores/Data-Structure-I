CC=gcc

CFLAGS=-c -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow 

all : main 

main : lista.o main.o
	$(CC) lista.o main.o -o main

main.o : main.c
	$(CC) $(CFLAGS) main.c

lista.o : lista.c lista.h
	$(CC) $(CFLAGS) lista.c

clean : 
	rm *.o main

