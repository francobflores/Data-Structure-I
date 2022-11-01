#include "lista.h"

Lista* criaLista()
{
	Lista* L = (Lista*) malloc(sizeof(Lista));
	L->pri=NULL;
	L->fim=NULL;
  L->aux=NULL;
	L->tamanho=0;
  return L;
}

Lista* deletaLista(Lista* L)
{
  limpaLista(L);
  free(L);
  printf("\n#####Lista Deletada####\n");
  return NULL;
}

void limpaLista(Lista* L)
{
  No *aux=L->pri;
  int cont=0;

  printf("\n#####Excluindo####\n");
  
  while(aux!=NULL)
  {
    No *temp = aux;
    printf("Excluindo posicao %i:\t valor: %i \t...OK!\n",cont,aux->chave);
    aux=aux->prox;
    free(temp);
    cont++;
  }
  
  printf("\n#####Lista Limpa####\n");
  L->pri=NULL;
  L->fim=NULL;

}


void insereInicio(Lista* L, int valor)
//Lista* insereInicio(Lista* L, int valor)
{
  
  No *novo=criaNo(valor);
  novo->prox=L->pri;
  if(L->pri==NULL)
  {
	  L->pri=novo;
    L->fim=novo;
  }
  else
  {
    L->pri->ant=novo;
    L->pri = novo;
  }
}

void insereFinal(Lista* L, int valor)
//Lista*  insereFinal(Lista* L, int valor)
{
  No *novo=criaNo(valor);
    
  if(L->pri==NULL)
  {
	  L->pri=novo;
    L->fim=novo;
  }
  else
  {
    L->fim->prox=novo;
    novo->ant=L->fim;
    L->fim=novo;
  }
 // return L;  
}

No*  buscaChave(Lista* L, int valor)
{
 No *aux=L->pri;

  while(aux!=NULL)
  {
    if(aux->chave==valor)
    {
      break;
    }
    aux=aux->prox;
  }
  return aux;
}

//Lista*  excluiInicio(Lista* L)
void excluiInicio(Lista* L)
{
  if(L!=NULL)
  {	  
    No *aux=L->pri;
    L->pri=aux->prox;
    
    if(L->pri!=NULL)
    {
	    L->pri->ant=NULL;
    }
    
    free(aux);
    
  }
  //return L;
}

//Lista*  excluiFinal(Lista *L)
void excluiFinal(Lista *L)
{
  No *aux=L->pri;

  if(aux->prox!=NULL)
  {	  
  	while(aux->prox!=NULL)
  	{
    		aux=aux->prox;
  	}
	  aux=aux->ant;
    free(aux->prox);
    aux->prox=NULL;
  }
  else
  {
	  free(L->pri);
    L->pri=NULL;
  }
  
//return L;
}

//Lista*  excluiChave(Lista* L, int valor)
void excluiChave(Lista *L, int valor)
{ 
  No *aux = L->pri;
  if(aux->chave == valor)
  {
    excluiInicio(L);
  }
  else
  {
    aux = L->fim;
    if(aux->chave == valor)
    {
      excluiFinal(L);
    }
    else
    {
      aux = buscaChave(L, valor);
      if(aux == NULL)
      {
        printf("chave não encontrada!");
      }
      else
      {
        aux->ant->prox = aux->prox;
        aux->prox->ant = aux->ant;
        free(aux);
      }
    }
  }
	//return NULL;
}

//Lista*  imprimeLista(Lista * L)
void imprimeLista(Lista * L)
{
  int cont=0;
  No *aux=L->pri;

  if(aux!=NULL)
  {
    printf("\n############# Conteudo da Lista ##########\n");
    while(aux!=NULL)
    {
      printf("Posicao: %i\t valor: %i\n",cont,aux->chave);
      aux=aux->prox;
      cont++;
    }

    printf("#######################\n");
  }
  else
  {
    printf("\n############# Lista Vazia ##########\n");
  }
  //return L;
}

void comparaListas(Lista *L , Lista *L1)
{
  No *aux = L->pri;
  No *aux2 = L1->pri;

  while (aux!=NULL)
  {
    if(aux->chave != aux2->chave)
    {
      printf("Listas diferentes!");
      break;
    }
    aux=aux->prox;
    aux2=aux2->prox;
  }
  if(aux == aux2)
  {
    printf("Listas iguais\n");
  }
  
}

void insereNodeInicio(Lista* L, No* node)
{
  node->prox=L->pri;
  if(L->pri==NULL)
  {
	  L->pri=node;
    L->fim=node;
  }
  else
  {
    L->pri->ant=node;
    L->pri = node;
  }

}

void insereNodeFinal(Lista* L, No* node)
{
  if(L->pri==NULL)
  {
	  L->pri=node;
    L->fim=node;
  }
  else
  {
    L->fim->prox=node;
    node->ant=L->fim;
    L->fim=node;
  }
}