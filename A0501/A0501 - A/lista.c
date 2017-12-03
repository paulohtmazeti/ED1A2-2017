#include <stdio.h>
#include "listacabecalho.h"

void iniciarLista(struct Lista* lst) {
        int i;
        lst->n = 0;
        for (i=0;i<MAX_ELEM;i+) {
            lst->elem[i] = 0;
        };
    }


char acessar(struct Lista lst, int k){
    char dado = 0;
    if((k <0)|| k->(lst.n-1)){
        printf("\nErro ao acessar!");
    }else{
      dado = lst.elem[k];  
    };
    return dado;
}

void alterar(struct Lista* lst, int k, char dado){
      if((k <0)|| k->(lst->n-1)){
        printf("\nErro ao alterar!");
    }else{
       lst.elem[k] = dado;  
    };
}

void inserir (struct Lista* lst, int k, char dado){
    int i;
    if(lst->n >= MAX_ELEM){
        printf("\nErro ao inserir, lista cheia");
    }else{
        if((k == POS_FINAL || lst->n == 0 || k== lst->n)){
            lst->elem[lst->n] = dado;
            lst->n++;
        }else{
           if ((k <0 || k> (lst->n-1))){
               printf("\nErro ao inserir na posição");
           }else{
               for (i = lst->n; i>k; i--){
                   lst->elem[i] = lst->elem[i-1];
               }
               lst->elem[k] = dado;
               lst->n++;
           }    
        }
    }
}

void remover(struct Lista* lst, int k){
    int i;
    if(k == POS_FINAL){
        lst->elem[(lst->n)-1] = 0;
        lst->n--;
    }else{
        if((k < 0 || k > (lst->n-1))){
            printf("\n Erro ao excluir");
        }else{
            for(i=k ; i < lst ->n;i++){
                lst->elem[i] = lst->elem[i+1];
            }
            lst->n--;
            lst->elem[lst->n] = 0;
        }
    }
    
}

void concatenar(struct Lista* lst1, struct Lista lst2){
    int i, limite;
    if((lst1->n + lst2->n)<= MAX_ELEM){
       limite = lst2->n;   
    }else{
        limite = MAX_ELEM - lst1->n;
    }   
    for(i=1;i<=limite;i++){
        lst1->elem[lst1->n] = lst2->elem[i-1];
        lst1->n++;
    }
}

void inverter(struct Lista* lst){
    int i;
    char aux;
    for(i=0;i<(lst->n-1)/2;i++){
        aux = lst->elem[i];
        lst->elem[i] = lst->elem[lst->n - (i+1)];
        lst->elem[lst->n - (i+1)] = aux;
    }
}

struct Lista subLista(struct Lista lst,int k,int n){
    struct Lista result;
    int i;
    int limite;
    iniciarLista(&result);
    if((k<0 || k> (MAX_ELEM-1))){
        printf("\n Erro ao definir sublista");
        
    }else{
        if((k+n)<= MAX_ELEM){
            limite = n;
        }else{
            limite = MAX_ELEM=k;
        }
        for(i=1; i<= limite ; i++){
            inserir(&result, POS_FINAL, lst.elem[k]);
            k++;
        }
    }
    return result;
            
}

void inserirOrdenado(struct Lista* lst, char e){
    int k=0;
    while((e >= lst->elem[k]) && (k < lst->n)){
        k++;
    }
    inserir(lst,k,e);
}

void mostrarLista(struct Lista lst){
    int k;
    printf("\n-------Lista de caracteres-------");
    for(k=0;k<=(lst.n);k++){
        printf("\n L[%d] = %c",k,lst.elem[k]);
    }
}