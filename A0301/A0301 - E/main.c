/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 10 de Setembro de 2017, 16:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int matriz[5][5];
    int linha[4];
    int coluna[4];
    int i, j, n, l, c;
    l = 0;
    c = 0;
    n = 0;
    printf("Entre com a  matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor da %dª linha e %dª coluna\n", i + 1, j + 1);
            scanf("%d", & n);
            matriz[i][j] = n;
            linha[i] = linha[i] + n;
            coluna[i] = coluna[i] + n;
        }

    }

    printf("Matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("|%d| ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Soma Linhas\n");
    for (j = 0; j < 5; j++) {
        printf("|%d| ", linha[j]);
    }

    printf("\n");
    printf("Soma colunas\n");
    for (j = 0; j < 5; j++) {
        printf("|%d| \n", coluna[j]);
    }

    return (EXIT_SUCCESS);
}

