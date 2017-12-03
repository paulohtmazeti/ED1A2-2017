/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 26 de Novembro de 2017, 11:13
 */

#include <stdio.h>
#include <stdlib.h>
#include "filacircular.h"

/*
 * 
 */
int main(int argc, char** argv) {
    struct Fila fc;

    char c;

    printf("\nIniciar Fila");
    iniciarFila(&fc);
    printf("\nInserir");
    inserir(&fc, 'P');
    inserir(&fc, 'A');
    inserir(&fc, 'U');
    inserir(&fc, 'L');
    inserir(&fc, 'O');
    listarElementos(fc);
    printf("\nRemover");
    remover(&fc);
    listarElementos(fc);
    printf("Obter Inicio");
    obterInicio(fc);
    printf("\n Verificar se esta cheia ou vazia:");
    vazia(fc);
    cheia(fc);
    printf("\nListar elementos:");
    listarElementos(fc);

    printf("\nPrograma Encerrado!");


    return (EXIT_SUCCESS);
}

