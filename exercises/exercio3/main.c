#include "listaSimples.h"

int main(void)
{
	Lista *L = NULL;
	Lista *L2 = NULL;
	Lista *Ordena = NULL;
	
    L = insereOrd (L, 10 );
	L = insereOrd (L, 20 );
	L2 = insereOrd (L2, 30 );
	L = insereOrd (L, 40 );
	L2 = insereOrd (L2, 50 );
	L2 = insereOrd (L2, 60 );
	L = insereOrd (L, 70 ); 
	

    printf("Lista L: \n");
    imprime(L);

	printf("Lista L2: \n");
    imprime(L2);

	Ordena = merge(L, L2, Ordena);

	imprime(Ordena);
	
	
	return 0;
}
