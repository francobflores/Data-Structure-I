#include "listaSimples.h"

int main(void)
{
	Lista *L = NULL;
	
    L = insereInicio (L, 10 );
	L = insereInicio (L, 15 );
	L = insereInicio (L, 10 );
	L = insereInicio (L, 14 );
	L = insereInicio (L, 10 );
	L = insereInicio (L, 14 );
	L = insereInicio (L, 17 );
	L = insereInicio (L, 18 );



    printf("Lista L: \n");
    imprime(L);

	L = excluiRep(L);

	printf("Após execução de excluir repetido:\n ");
	imprime(L);

	return 0;
}
