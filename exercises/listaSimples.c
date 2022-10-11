#include "listaSimples.h"

Lista *criaNo( int valor )
{
	Lista *novo;
	novo = (Lista*)malloc(sizeof(Lista));
	if(novo == NULL)
	{
		printf("Erro no mallloc\n");
		exit(1);
	}
	novo->chave = valor;
	novo->prox = NULL;

	return novo;
}
//Inserção

Lista *insereInicio( Lista *L, int valor )
{
	Lista *novo = criaNo(valor);
	novo->prox = L;
	L = novo;

	return L;
}
Lista *insereFinal(Lista *L , int valor)
{
  Lista *novo=criaNo(valor);
  Lista *aux=L;
  
  if(L==NULL)
  {
	  L=novo;
  }
  else
  {
    while(aux->prox!=NULL)
    {
  	  aux=aux->prox;
    }
    aux->prox=novo;
  }
  return L;
}
Lista *insereOrd( Lista *L, int valor )
{
	Lista *novo = criaNo(valor);
	Lista *aux = L;
	Lista *pred = NULL;

	if( L==NULL )
	{
		L = novo;
	}
	else
	{
		while(aux != NULL && valor > aux->chave)
		{
			pred = aux;
			aux = aux->prox;
		}
		if(pred == NULL)
		{
			novo->prox = aux;
			L = novo;
		}
		else
		{
			novo->prox = aux;
			pred->prox = novo;
		}
	}
	return L;

}

//BUSCA

Lista *buscaChave(Lista *L , int valor)
{
	Lista *aux = L;
  	if ( L == NULL )
  	{
		return NULL;
  	}
  	else
  	{
		while(aux != NULL)
  		{
    		if(aux->chave == valor)
    		{
      			break;
    		}
    	aux = aux->prox;
  		}
		
  	}
	return aux;
}

Lista *buscaChaveOrd(Lista *L, int valor)
{
	Lista *aux=L;
  	if ( L == NULL )
  	{
		return NULL;
  	}
  	else
  	{
		while(aux!=NULL)
  		{
    		if(valor <= aux->chave )
    		{
      			break;
    		}
    	aux=aux->prox;
  		}
  	}
	return aux;
}

//EXCLUSÃO

Lista *excluiInicio(Lista *L)
{
  if(L!=NULL)
  {	  
    Lista *aux=L;
    L=L->prox;
    free(aux);
  }
  return L;
}

Lista *excluiFinal(Lista *L)
{
	Lista *aux = L;
	Lista *pred  = NULL;

	if(L == NULL )
	{
		return NULL;
	}
	else
	{
		while(aux->prox != NULL)
		{
			pred = aux;
			aux = aux->prox;
		}
	
		if(pred == NULL)
		{
			L = NULL;
		}
		else
		{
			pred->prox = NULL;
		}

		free(aux);
	}
	return L;
}

Lista *excluiChave(Lista *L, int valor)
{
	Lista *aux = L;
	Lista *pred = NULL;

	if(L == NULL)
	{
		return NULL;
	}
	else
	{
		while(aux != NULL && valor != aux->chave)
		{
			pred = aux;
			aux = aux->prox;
		}
		if(pred == NULL)
		{
			L = aux->prox;
		}
		else
		{
			pred->prox = aux->prox;
		}
		free(aux);

	}
	return L;

}

Lista *excluiOrd(Lista *L, int valor)
{
	Lista *aux = L;
	Lista *pred = NULL;
	
	if(L == NULL)
	{
		return NULL;
	}
	else
	{
		while (aux != NULL && valor > aux->chave)
		{
			pred = aux;
			aux = aux->prox;
		}
		if(aux != NULL && valor == aux->chave)
		{
			if(pred == NULL)
			{
				L= aux->prox;
			}
			else
			{
				pred->prox = aux->prox;
			}
			free(aux);
		}
	}
	return L;
}

//PRINT

void imprime( Lista *L )
{
	Lista *aux = L;
	while(aux != NULL)
	{
		printf("[%i] ", aux->chave);
		aux = aux->prox;
	}
	printf("\n");

}




/*

Lista *excluiRep(Lista *L)
{
    Lista *comp = L;
    Lista *aux = L->prox;

    if( L == NULL)
    {
        return L;
    }
    else
    {
        while(comp != NULL)
        {
            while(aux != NULL)
            {
				if(comp->chave == aux->chave )
            	{
                	L = excluiChave(L, aux->chave);
            		
            	}
				aux = aux->prox;
            }
            comp = comp->prox;
			aux = comp->prox;
        }
    }
    return L;
}

*/

Lista *excluiRep(Lista *L)
{
	Lista *aux = L;
	Lista *comp = aux->prox;
	Lista *pred = L;
	
	
	while( aux != NULL)
	{
		
		
		while( comp != NULL)
		{
			if( aux->chave == comp->chave )
			{
				
				pred->prox = comp->prox;
				free(comp);
			}
			
				
			
			pred = aux;
			comp = comp->prox;
		}
		aux = aux->prox;
		pred = aux;
		comp = aux->prox;
		
	}
	return L;
}