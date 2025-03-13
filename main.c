#include <stdio.h>
#include "./TAD_int/TAD_int.h"

int main(){
    Lista* lis = lst_cria();

    if(lst_vazia(lis)){
        printf("Lista esta vazia");
    }

    return 0;
}

