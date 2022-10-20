#ifndef LISTA2_H
#define LISTA2_H
#include<stdio.h>
#include<stdlib.h>

//struct tipe doubly linked list

typedef struct lista2
{
    int chave;
    struct lista2 *prox;
    struct lista2 *ant;
}Lista2;

/* Função que criar um novo nó do tipo Lista2 */
Lista2 *criaNo(int valor);

/* Função que insere um novo nó no inicio da Lista2 */
Lista2 *insereInicio(Lista2 *L, int valor);




#endif