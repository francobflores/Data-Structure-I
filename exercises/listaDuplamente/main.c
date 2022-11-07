#include"listaDupla.h"

int main()
{
    Lista2 *L = NULL;
    Lista2 *L2 = NULL;
    L = insereInicio(L, 5);
    L = insereInicio(L, 10);
    L = insereInicio(L, 15);
    L = insereInicio(L, 20);
    L = insereFinal(L, 100);


    L2 = insereOrd(L2, 45);
    L2 = insereOrd(L2, 15);
    L2 = insereOrd(L2, 99);
    L2 = insereOrd(L2, 75);
    L2 = insereOrd(L2, 0);

    printf("Lista 1: \n");
    imprime(L);

    L = excluiInicio(L);
    printf("Lista 1 pós exclusão: \n");
    imprime(L);
    printf("Lista 2 :\n");
    imprime(L2);
    
    return 0;
}