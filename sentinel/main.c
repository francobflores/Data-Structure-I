#include "listaord.h"

int main(void)
{
  printf("iniciando o prog1\n");
  Lista* L = criaLista();
  printf("insereOrdenado\n");
  
  insereFinal(L, 10);
  insereFinal(L, 20);
  insereFinal(L, 50);
  
  
  imprimeLista(L);

  No *recebe = bucaChaveOrd(L,20);
  printf("\n\n%d\n\n", recebe->chave);

  //printf("\n\nlimpalista\n\n");

  //limpaLista(L);
//printf("Conteudo:\n");

  //imprimeLista(L);

 // L=deletaLista(L);
  //free(L);
  return 0;
}