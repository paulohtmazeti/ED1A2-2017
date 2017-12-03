#include <stdio.h>
#include "fila.h"

int vazia(struct Fila q){
    if(q.tamanho == 0){
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila q){
    if(q.tamanho == MAX_ELEM){
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* q){
    int i;
    for(i=0; i<MAX_ELEM; i++){
        q->elem[i] = ELEM_NULO;
    }
    q->tamanho = 0;
}

char obterInicio(struct Fila q){
    char dado = ELEM_NULO;
    if(!vazia(q)){
        dado = q.elem[0];
    }
    return dado;
}

void listarElemento(struct Fila q){
    int i;
    
    if(vazia(q)){
        printf("\nFila Vazia!");
    }else{
       printf("\nConteudo da fila:"); 
       for(i=0; i<= q.tamanho; i++){
          printf("%iº Elemento =  %c",i, q.elem[i]); 
       } 
    }
}

int inserir(struct Fila q, char e){
    if(!cheia(q)){
        q->elem[q->tamanho] = e;
        q->tamanho ++;  
    }else{
        FILA_CHEIA;
    }
    return SUCESSO;
}

char remover(struct Fila* q){
    int i;
    char e = ELEM_NULO;
    if(e != ELEM_NULO){
        for(i=0; i<=q->tamanho;i++){
            q->elem[i] = q->elem[i=1];
            q->tamanho--;
        }
    }
    return e;
}