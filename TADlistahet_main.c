#include <stdio.h>
#include"./TAD_listahet/TAD_listahet.h"

int main(){
    Listahet* lis = lsthet_cria();

    if(lsthet_vazia(lis)){
        printf("\nLista esta vazia.\n");
    }
    else{
        printf("Lista nao esta vazia.\n");
    }

    return 0;
}
