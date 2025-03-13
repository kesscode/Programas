Lista* lst_cria(){
    return NULL;
}

void lst_libera (Lista* l){

}

Lista* lst_insere (Lista* l, int i){
    Lista* novo_no = (Lista*) malloc (sizeof(Lista));
    novo_no->info = i;
    novo_no->prox = l;
    return novo_no;
}

Lista* lst_retira (Lista *l, int v){

}

int lst_vazia (Lista* l){
    return l == NULL; //se tiver vazia retorna 1, se tem algo retorna 0
}

Lista* lst_busca (Lista* l, int v);

void lst_imprime (Lista* l){
    
}


