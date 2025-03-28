#include<stdio.h>
#include<stdlib.h>
// int soma(int A, int B);
// int sub(int A, int B);
// void exec(int A, int B, int(*func)(int, int));

int impar(int A);
int par(int A);
int primo(int A);
void imprime(int* v, int tam, int(*condicao)(int));

int main(){
    // int A,B;
    int vetor[] = {1,2,10,11,25,33,40};
    int tam = sizeof(vetor)/sizeof(int);

    printf("Primos:\n");
    imprime(vetor,tam,primo);
    printf("Pares:\n");
    imprime(vetor,tam,par);
    printf("Impares:\n");
    imprime(vetor,tam,impar);

    // printf("Digite um valor para A e B: ");
    // scanf("%d %d", &A, &B);

    // exec(A,B,soma);
    // exec(A,B,sub);
    
    return 0;
}

// int soma(int A, int B){
//     return A+B;
// }
// int sub(int A, int B){
//     return A-B;
// }
// void exec(int A, int B, int(*func)(int, int)){
//     printf("%d\n", func(A,B));
// }

int par(int A){
    return A%2==0;
}


int impar(int A){
    return A%2!=0;
}

int primo(int A){
    for(int i=2 ; i < A; i++){
        if(A%i == 0)
            return 0;
    }
    return 1;
}


void imprime(int* v, int tam, int(*condicao)(int)){

    for(int i=0; i<tam; i++){
        if(condicao(v[i]))
            printf("%d ", v[i]);
    }

    printf("\n");
}