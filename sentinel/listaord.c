#include "listaord.h"

No* bucaChaveOrd(Lista* L, int valor)
{
    L->aux = L->pri;
    while(L->aux != NULL && valor > L->aux->chave)
    {
        if(L->aux->prox == NULL)break;
        L->aux = L->aux->prox;
    }
    return L->aux;
}
/*
void insereOrd(Lista* L, int valor)
{
    if(L->pri!=NULL) //lista NAO vazia
    {
        if(valor <= L->pri->chave) //se valor menor que primeiro da lista
        {
            insereInicio(L,valor);
        }
        else if(valor >= L->fim->chave)// se valor maior que ultimo da lista
        {
            insereFinal(L,valor);
        }
        else
        {
            No *novo=criaNo(valor); 
            if(valor >= L->aux->chave)
            {//quer dizer que o valor que eu procuro está a direita do aux
                
                while(valor >= L->aux->prox->chave && L->aux->prox != L->fim)
                {
                    L->aux = L->aux->prox;
                }
                novo->prox=L->aux->prox;
                novo->ant=L->aux;
                L->aux->prox->ant=novo;
                L->aux->prox=novo;        
            }
            else
            {
                while(valor <= L->aux->ant->chave && L->aux->ant != L->pri)
                {
                    L->aux = L->aux->ant;
                }

                novo->prox = L->aux;
                novo->ant=L->aux->ant;
                L->aux->ant->prox=novo;
                L->aux->ant=novo;      
                 
            }
        }

    }
    else
    {
        //Lista está vazia
        insereInicio(L,valor);
    }

}*/

void insereOrd(Lista* L, int valor)
{
    if(L != NULL)
    {
        if(valor <= L->pri->chave)
        {
            insereInicio(L, valor);
        }
        else
        {
            if(valor >= L->fim->chave)
            {
                insereFinal(L, valor);
            }

        }
    }
        else
        {
            No *novo = criaNo(valor);
            L->aux = bucaChaveOrd(L, valor);
            if(L->aux->chave < valor)
            {
                L->aux->prox = novo;
                novo->ant = L->aux;
            }
            else
            {
                novo->prox = L->aux;
            }
            if(L->aux->chave > valor)
            {
                L->aux->ant->prox = novo;
                novo->ant = novo;
            }

        }
    
    
}

void excluiChaveOrd(Lista* L,int valor)
{
    
}

Lista* juntarListas(Lista* L1, Lista* L2)
{
   Lista* L3 = (Lista*) malloc(sizeof(Lista));

    while(L1->pri != NULL || L2->pri != NULL)
    {
        if(L1->pri!=NULL && L2->pri!=NULL)
        {
            if(L1->pri >= L2->pri)
            {
                insereNodeFinal(L3,L2->pri);
            }
            else
            {
                insereNodeFinal(L3,L1->pri);
                L1->pri = L1->pri->prox;
            }
        }
        else
        { 
            if(L3->pri == NULL)
            {
                free(L3);
                return NULL;
            }
            else
            {
                if(L1->pri==NULL)
                {
                    if(L2->pri==NULL)
                    {
                        free(L3);
                        return NULL;
                    }
                    free(L3);
                    return L2;
                }
                else
                {
                    if(L1->pri==NULL)
                    {
                        free(L3);
                        return NULL;
                    }
                    free(L3);
                    return L1;
                }

            }
             
        }
   }
    return L3;
}