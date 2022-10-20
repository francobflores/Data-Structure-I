#include"listaDupla.h"

Lista2 *criaNo(int valor)
{
    Lista2 *novo;
	novo = (Lista2*)malloc(sizeof(Lista2));
	if(novo == NULL)
	{
		printf("Erro no mallloc\n");
		exit(1);
	}
	novo->chave = valor;
	novo->prox = NULL;
    novo->ant = NULL;
	return novo;
}
Lista2 *insereInicio(Lista2 *L, int valor)
{
    Lista2 *novo = criaNo(valor);
	novo->prox = L;
    novo->ant = NULL;
	L = novo;

	return L;
}
