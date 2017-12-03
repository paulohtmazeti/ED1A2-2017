#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "listaencadeada.h"

    struct No *inicioA;
    struct No *nA1 = NULL;
    struct No *nA2 = NULL;
    struct No *nA3 = NULL;

    struct No2 *inicioB;
    struct No2 *nB1 = NULL;
    struct No2 *nB2 = NULL;
    struct No2 *nB3 = NULL;

void montarListaSimples(){

    nA1 = malloc(sizeof(struct No));
    nA2 = malloc(sizeof(struct No));
    nA3 = malloc(sizeof(struct No));

    
    nA1->dado = 10;
    nA2->dado = 11;
    nA3->dado = 12;

  
    inicioA = nA1; 
    nA1->prox = nA2;
    nA2->prox = nA3;
    nA3->prox = NULL; 
}

void listarListaSimples(){
    struct No *noCorrente = inicioA; 

    printf("\n\nOs elementos da lista encadeada sao - \n");
    while(noCorrente != NULL){
        printf("|%d|", noCorrente->dado); 
        noCorrente = noCorrente->prox; 
        if (noCorrente != NULL)
            printf("--->");
        else
            printf("---*");
    }
}

void montarListaDupla(){
    nB1 = malloc(sizeof(struct No2));
    nB2 = malloc(sizeof(struct No2));
    nB3 = malloc(sizeof(struct No2));

    
    nB1->dado = 20;
    nB2->dado = 21;
    nB3->dado = 22;

   
    inicioB = nB1; 
    nB1->prox = nB2;
    nB1->ant = NULL;

    nB2->prox = nB3;
    nB2->ant = nB1;

    nB3->prox = NULL;
    nB3->ant = nB2;
}

void listarListaDupla(){
    struct No2 *noCorrente = inicioB; 

    printf("\n\nOs elementos da lista duplamente encadeada sao - \n");
    while(noCorrente->prox != NULL){ 
        printf("|%d|--->", noCorrente->dado);
        noCorrente = noCorrente->prox; 
    }

    if (noCorrente != NULL){ 
        printf("||%d||*->", noCorrente->dado); 
        noCorrente = noCorrente->ant;
    }

    while(noCorrente != NULL){ 
        printf("|%d|", noCorrente->dado); 
        noCorrente = noCorrente->ant; 
        if(noCorrente != NULL)
            printf("--->");
        else
            printf("---*");
    }
}