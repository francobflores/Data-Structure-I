#ifndef LISTA_H
#define LISTA_H
#include<stdio.h>
#include<stdlib.h>

/* Estrutura do tipo Lista */
typedef struct lista
{
	int chave;
	struct lista *prox;
}Lista;

/* Função que cria um nó de uma Lista Simplesmente encadeada */
Lista *criaNo( int valor );


/* Função que insere um novo nó no início da Lista Simplismente Encadeada */
Lista *insereInicio( Lista *L, int valor );

/* Função que insere um novo nó no final da Lista Simplismente Encadeada */
Lista *insereFinal( Lista *L, int valor );

/*Função que insere um novo nó ordenado na Lista Ordenada */
Lista *insereOrd( Lista *L, int valor );

/* BUSCA */

/*Função que busca uma chave na Lista */
Lista *buscaChave(Lista *L , int valor);

/*Função que busca uma chave em uma Lista Ordenada */
Lista *buscaChaveOrd(Lista *L, int valor);


/*EXCLUSÃO */

/*Função que exclui o primeiro nó da Lista */
Lista *excluiInicio(Lista *L);

/*Função que exclui o nó que está no final da Lista */
Lista *excluiFinal(Lista *L);

/*Função que excluio nó com  a chave indicada pela função na Lista se a chave existir */
Lista *excluiChave(Lista *L, int valor);

/*Função para excluir o nó de uma Lista Simplismente Encadeada Ordenada */
Lista *excluiOrd(Lista *L, int valor);

Lista *excluiRep(Lista *L);
/* PRINT */

/* Função que imprime na tela os valores da Lista */
void imprime( Lista *L );


#endif