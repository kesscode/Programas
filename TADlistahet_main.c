#include <stdio.h>
#include"./TAD_listahet/TAD_listahet.h"

int main(){
    Listahet* lis = lsthet_cria();

    printf("\n");
    lis = lsthet_insere(lis, 1, RET, lsthet_cria_elemento(RET));
    printf("\n");
    lis = lsthet_insere(lis, 2, CIR, lsthet_cria_elemento(CIR));
    printf("\n");
    lis = lsthet_insere(lis, 3, TRI, lsthet_cria_elemento(TRI));

    if(lsthet_vazia(lis)){
        printf("\nLista esta vazia.\n");
    }
    else{
        printf("\nLista nao esta vazia.\n");
    }

    printf("\n");
    lsthet_imprime(lis);

    return 0;
}
