#include <stdio.h>
#include "./TAD_int/TAD_int.h"

int main(){
    Lista* lis = lst_cria();

    if(lst_vazia(lis)){
        printf("\nLista esta vazia.");
    }

    printf("\n\nInserindo elementos...");
    lis = lst_insere(lis, 23);
    lis = lst_insere(lis, 45);
    lis = lst_insere(lis, 56);
    lis = lst_insere(lis, 78);

    lst_imprime(lis);

    printf("\n\nRemovendo elementos...");
    lis = lst_retira(lis, 78);
    printf("\n\nLista apos remocao...");
    lst_imprime(lis);

    printf("\n\nRemovendo elementos...");
    lis = lst_retira(lis, 45);
    printf("\n\nLista apos remocao...");
    lst_imprime(lis);

    printf("\n\nBuscando elementos...");
    Lista* elem_encontrado = lst_busca(lis, 30);
    Lista* elem_encontrado2 = lst_busca(lis, 15);

    lst_libera(lis);

    return 0;
}

