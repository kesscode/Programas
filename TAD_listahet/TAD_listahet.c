Listahet* lsthet_cria(){
    return NULL;
}

Listahet* lsthet_libera (Listahet* l); 

Listahet* lsthet_insere (Listahet* l, int id, int tipo, void* info){
    Listahet* novo_no = (Listahet*) malloc (sizeof(Listahet));
    novo_no->id = id;
    novo_no->tipo = tipo;
    novo_no->info = info;
    novo_no->prox = l;
    return novo_no;

    //l = cabeca da minha lista
    //id = chave-primaria q identifica unicamente um obj da lista
    //tipo = inteiro definido que identifica o tipo guardado na lista
    //info = ponteiro void que guarda o endereco para a estrutura que guarda as informacoes de um tipo especifico
    //retorna o ponteiro para a nova cabeca da lista
}

void* lsthet_cria_elemento (int tipo){
    switch(tipo){
        case RET:
            Retangulo* ptr1 = (Retangulo*) malloc (sizeof(Retangulo));
            printf("Criando um retangulo.\n");
            printf("Digite a base: ");
            scanf("%f%*c", &ptr1->b);
            printf("Digite a altura: ");
            scanf("%f%*c", &ptr1->h);
            return (void*)ptr1;

        case CIR:
            Circulo* ptr2 = (Circulo*) malloc (sizeof(Circulo));
            printf("Criando um circulo.\n");
            printf("Digite o raio: ");
            scanf("%f%*c", &ptr2->r);
            return (void*)ptr2;

        case TRI:
            Triangulo* ptr3 = (Triangulo*) malloc (sizeof(Triangulo));
            printf("Criando um triangulo.\n");
            printf("Digite a base: ");
            scanf("%f%*c", &ptr3->b);
            printf("Digite a altura: ");
            scanf("%f%*c", &ptr3->h);
            return (void*)ptr3;

        default:
            printf("Tipo indefinido.\n");
            return NULL;   
    }
}

Listahet* lsthet_retira (Listahet *l, int id); 

int lsthet_vazia (Listahet* l){
    return l == NULL;
}

Listahet* lsthet_busca (Listahet* l, int id); 

void lsthet_imprime (Listahet* l){
    for( ; l != NULL; l = l->prox){
        switch(l->tipo){
            case RET:
                Retangulo* ret = (Retangulo*)l->info;
                printf("====Retangulo====\n");
                printf("base: %.2f\n", ret->b);
                printf("altura: %.2f\n\n", ret->h);
                break;

            case TRI: 
                Triangulo* tri = (Triangulo*)l->info;
                printf("====Triangulo====\n");
                printf("base: %.2f\n", tri->b);
                printf("altura: %.2f\n\n", tri->h);
                break;

            case CIR:
                Circulo* cir = (Circulo*)l->info;
                printf("====Circulo====\n");
                printf("raio: %.2f\n\n", cir->r);
                break;

            default:
                printf("Tipo nao suportado.\n");
                break;
        }
    }
}