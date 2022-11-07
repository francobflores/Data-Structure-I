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

   Lista* L1 = criaLista();
  printf("insereFinal\n");
  insereFinal(L1,20);
  insereFinal(L1,30);
  insereFinal(L1,40);
  insereFinal(L1,90);
  

  //printf("Depois do exclui incio:\n");
  //excluiChave(L,50);          
printf("O que tem na lista2\n");
  imprimeLista(L1);

printf("Comparação das listas:\n");
  comparaListas(L,L1);

  //printf("\n\nlimpalista\n\n");

  //limpaLista(L);
//printf("Conteudo:\n");

  //imprimeLista(L);

 // L=deletaLista(L);
  //free(L);
  return 0;
}