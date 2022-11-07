#include "listaord.h"

int main(void)
{
  printf("iniciando o prog1\n");
  Lista* L = criaLista();
  printf("insereFinal\n");
  insereFinal(L,20);
  insereFinal(L,30);
  insereFinal(L,40);
  insereFinal(L,90);
  
  
  printf("O que tem na lista\n");
  imprimeLista(L);

  excluiChave(L,30);
  printf("Depois do excluiChave:\n");
  imprimeLista(L);
  
  //printf("\n\nlimpalista\n\n");

  //limpaLista(L);
//printf("Conteudo:\n");

  //imprimeLista(L);

 // L=deletaLista(L);
  //free(L);
  return 0;
}