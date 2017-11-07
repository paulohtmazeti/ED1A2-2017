/* 
 * File:   pilhaestatica.c
 * Author: aluno
 *
 * Created on 31 de Outubro de 2017, 17:27
 */

#include "pilhaestatica.h"
#include <stdio.h>


// verificar se esta vazia

int vazia(struct Pilha p) {
    if (p.topo == -1) {
        return 1;
    } else {
        return 0;
    }
}
//verificar se esta cheia

int cheia(struct Pilha p) {
    if (p.topo == (MAX - 1)) {
        return 1;
    } else {
        return 0;
    }
}
//criar 

void iniciarPilha(struct Pilha *p) {
    p-> topo = -1;
    for (int i = MAX; i >= 0; i--) {
        p->elem[i] = 0;
    }

}
//pegar o elemento do topo

char obterTopo(struct Pilha p) {
    return p.elem[p.topo];
}

//listar todos elementos

void listarElementos(struct Pilha p) {
    int i;
    printf("======LISTANDO A PILHA======");
    for (i = MAX; i >= 0; i--) {
        printf("%c ", p.elem[i]);
    }
}
//inserir os elementos

int inserir(struct Pilha *p, char c) {
    if (p->topo != (MAX - 1)) {
        p-> topo++;
        p-> elem[p-> topo] = c;
    }

}
//remover elementos

char remover(struct Pilha *p) {
    if (p->topo != -1) {
        char aux = p->elem[p->topo];
        p->elem[p->topo] = 0;
        p->topo--;
        return aux;
    }

};
//verificar se é palindrome

int palindrome(struct Pilha p) {

    int i, cont, erro;
    char contrario[10];
    cont = 0;
    erro = 0;
    for (i = p.topo; i >= 0; i--) {
        contrario[cont] = p.elem[i];
        cont++;
    }

    for (i = p.topo; i >= 0; i++) {
        if (contrario[i] != p.elem[i]) {
            erro = 1;
        }
    }
    if (erro = 0) {
        return 1;
    } else {
        return 0;
    }
}
