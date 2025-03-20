#ifndef __TAD_int_H__
#define __TAD_int_H__
#include <stdlib.h>

struct lista{
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* lst_cria(); //OK
void lst_libera (Lista* l); //OK

Lista* lst_insere (Lista* l, int i); //OK
Lista* lst_retira (Lista *l, int v); //OK

int lst_vazia (Lista* l); //OK

Lista* lst_busca (Lista* l, int v); //OK

void lst_imprime (Lista* l); //OK

#include"TAD_int.c"
#endif