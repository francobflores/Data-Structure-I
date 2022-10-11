#include "listaSimples.h"

int main(void)
{
	Lista *L = NULL;
	
	
    L = insereInicio (L, 10 );
	L = insereInicio (L, 14 );
	L = insereInicio (L, 10 );
	L = insereInicio (L, 22 ); 
	

    

    printf("Lista Original: \n");
    imprime(L);
	
	L = excluiRep(L);

	imprime(L);


	

	 
    

	
	

	return 0;
}
