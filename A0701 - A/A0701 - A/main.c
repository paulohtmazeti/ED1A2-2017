/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 25 de Novembro de 2017, 20:27
 */

#include <stdio.h>
#include <stdlib.h>
#include"fila.h"

/*
 * 
 */
int main(int argc, char** argv) {
    struct Fila f;
    char c;
    printf("\nIniciar Fila");
    iniciarFila(&f);
    printf("\n Inserir")
    inserir(&f, 'P');
    inserir(&f, 'A');
    inserir(&f, 'U');
    inserir(&f, 'L');
    inserir(&f, 'O');
    listarElementos(f);
    printf("\nRemover:");
    remover(&f);
    listarElementos(f);
    printf("Obter Inicio");
    obterInicio(f);
    printf("\nVerificar Fila");
    vazia(f);
    cheia(f);
    printf("Listar Elementos:")
    listarElementos(f);


    return 0;

}

