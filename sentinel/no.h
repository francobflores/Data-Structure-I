#ifndef NO_H
#define NO_H

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

typedef struct no 
{
  int chave;
  struct no* prox;
  struct no* ant;
}No;

No *criaNo(int valor);

#endif