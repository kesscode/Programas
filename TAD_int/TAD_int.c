Lista* lst_cria(){
    return NULL;
}

void lst_libera (Lista* l){
    Lista* aux = l;
    while(aux != NULL){
        Lista* temp = aux->prox;
        free(aux);
        aux = temp;
    }
}

Lista* lst_insere (Lista* l, int i){
    Lista* novo_no = (Lista*) malloc (sizeof(Lista));
    novo_no->info = i;
    novo_no->prox = l;
    return novo_no;
}

Lista* lst_retira (Lista *l, int v){
    if(lst_vazia(l)){
        printf("Lista esta vazia.");
        return l;
    }

    Lista* atual = l;
    Lista* ant = NULL;

    while(atual!=NULL && atual->info!=v){
        ant = atual;
        atual = atual->prox;
    }

    if(atual==NULL){
        printf("\nValor %d nao encontrado.", v);
        return l;
    }

    if(ant==NULL){ //elemento a ser retirado está no primeiro nó
        l = atual->prox;
        printf("\nValor %d removido.", v);
    }
    else{ //elemento a ser retirado esta no meio ou fim
        ant->prox = atual->prox;
        printf("\nValor %d removido.", v);
    }
    free(atual);
    return l;
}

int lst_vazia (Lista* l){
    return l == NULL; //se estiver vazia: retorna 1 | se não estiver vazia: retorna 0
}

Lista* lst_busca (Lista* l, int v){

    if(lst_vazia(l)){
        printf("Lista esta vazia.");
        return l;
    }

    Lista* aux;
    for(aux=l; aux!=NULL; aux=aux->prox){
        if(aux->info==v){
            printf("\nElemento %d encontrado.", v);
            return l;
        }
    }
    printf("\nElemento %d nao foi encontrado.", v);
    return NULL;
}

void lst_imprime (Lista* l){

    if(lst_vazia(l)){
        printf("Lista esta vazia.");
        return;
    }

    Lista* aux;
    for(aux=l; aux!=NULL; aux=aux->prox){
        printf("\nElemento %d", aux->info);
    }
}


