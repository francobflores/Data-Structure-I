#ifndef LISTAORD_H
#define LISTAORD_H

#include"lista.h"


No* bucaChaveOrd(Lista* L, int valor);
void insereOrd(Lista* L, int valor);
void excluiChaveOrd(Lista* L,int valor);
Lista* juntarListas(Lista* L1, Lista* L2);
#endif