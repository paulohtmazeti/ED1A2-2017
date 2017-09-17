/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 10 de Setembro de 2017, 16:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int matriz[3][3];
    int i, j, n;

    printf("Entre com uma matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da %dª linha e %dª coluna\n", i + 1, j + 1);
            scanf("%d", & n);
            matriz[i][j] = n;
        }
    }
    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("|%d| ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz Transposta:\n");
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            printf("|%d| ", matriz[i][j]);
        }1
                
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

