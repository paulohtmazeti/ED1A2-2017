/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pilhaEstatica.h
 * Author: user
 *
 * Created on 25 de Outubro de 2017, 21:18
 */

#ifndef PILHAESTATICA_H
#define PILHAESTATICA_H

#ifdef __cplusplus
extern "C" {
#endif

#define SIM 1
#define NAO 0
#define MAX 10

    
//estrutura de dados    
struct Pilha{
    int topo;
    char elem[MAX];
};    

// funçoes
int vazia(struct Pilha);
int cheia(struct Pilha);
void iniciarPilha(struct Pilha*);
char obterTopo(struct Pilha);
void listarElementos(struct Pilha);
int inserir(struct Pilha*, char c);
char remover(struct Pilha*);
int palindrome(struct Pilha);
    





#ifdef __cplusplus
}
#endif

#endif /* PILHAESTATICA_H */

