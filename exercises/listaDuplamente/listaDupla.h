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

/*Função que insere um novo nó no final da Lista2 */
Lista2 *insereFinal(Lista2 *L, int valor);

/*Função que insere um novo nó ordenadamente na Lista2 */
Lista2 *insereOrd(Lista2 *L, int valor);

/* Função que mostra no console a lista completa */
void imprime( Lista2 *L );

/* Função que exclui um nó no incio da Lista2 */
Lista2 *excluiInicio(Lista2 *L);

/* Funcão de busca uma chave em uma lista não ordenada */
Lista2 *buscaLista( Lista2 *L, int valor );

/* Fução de busca uma chave em uma lista ordenada */
Lista2 *buscaListaOrd(Lista2 *L, int valor);

#endif
