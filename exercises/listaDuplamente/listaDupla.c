#include"listaDupla.h"

Lista2 *criaNo(int valor)
{
    Lista2 *novo;
	novo = (Lista2*)malloc(sizeof(Lista2));
	if(novo == NULL)
	
	{	printf("Erro no mallloc\n");
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

Lista2 *insereFinal(Lista2 *L, int valor)
{
	Lista2 *novo = criaNo( valor);
	Lista2 *aux = L;
	if ( L == NULL)
	{
		L = novo;
	}
	else
	{
		while (aux->prox != NULL)
		{
			aux = aux->prox;
		}
		aux->prox = novo;
		novo->ant = NULL;
	}
	return L;

}

Lista2 *insereOrd(Lista2 *L, int valor)
{
	Lista2 *novo = criaNo(valor);
	Lista2 *aux = buscaListaOrd(L, valor);
	if(aux == NULL)
	{
		L = novo;
	}
	else
	{
		if(aux->chave < valor)
		{
			novo->prox = novo;
			novo->ant = aux;
		}
		else
		{
			novo->prox = aux;
		
		if(aux->ant == NULL)
		{
			L = novo;
		}
		else
		{
			aux->ant->prox = novo;
			novo->ant = aux->ant;
		}
		aux->ant = novo;
		}	
	}

	return L;	
}

Lista2 *excluiInicio(Lista2 *L)
{	
	Lista2 *aux = L;
	if( L == NULL)
	{
		return NULL;
	}
	L = L->prox;
	if(L != NULL)
	{
		L->ant = NULL;
	}
	free(aux);
	return L;
}

Lista2 *buscaLista( Lista2 *L, int valor )
{
	Lista2 *aux = L;
	while ( aux != NULL && valor != aux->chave )
	{
	if ( aux->prox == NULL )
	{
		break;
	} 
	aux = aux->prox ;
	}
	return aux ;
}
Lista2 *buscaListaOrd(Lista2 *L, int valor)
{
	Lista2 *aux = L;
	while( aux != NULL && valor > aux->chave)
	{
		if( aux->prox == NULL)
		{
			break;
		}
		aux = aux->prox;
	}
	return aux;
}

void imprime( Lista2 *L )
{
	Lista2 *aux = L;
	while(aux != NULL)
	{
		printf("[%i] ", aux->chave);
		aux = aux->prox;
	}
	printf("\n");

}

