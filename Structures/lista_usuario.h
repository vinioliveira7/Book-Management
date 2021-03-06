#include "../Models/usuario.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_USUARIO_H
#define LIST_USUARIO_H
typedef struct ItemListUsuario{
   Usuario* valor;
   struct ItemListUsuario* prox;
}ItemListUsuario;

typedef struct ListaUsuario{
    ItemListUsuario* inicio;
    int len;  
}ListaUsuario;

void AddListUsuario(ListaUsuario* list, Usuario* usuario);
void ImprimirLista(ListaUsuario* list);

#endif