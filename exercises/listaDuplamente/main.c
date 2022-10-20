#include"listaDupla.h"

int main()
{
    Lista2 *L = NULL;

    L = insereInicio(L, 5);
    L = insereInicio(L,10);

    imprime(L);
    
    return 0;
}