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
#include <stdbool.h>
/*
 * 
 */
int soma(int mA[][3], int mB[][3]) {
    int matrizC[3][3];
    int soma;
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            soma = mB[i][j] + mA[i][j];
            matrizC[i][j] = soma;
        }
    }
    printf("SOMA:\n");
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            printf("|%d| ", matrizC[i][j]);
        }

        printf("\n");
    }
}

int sub(int mA[][3], int mB[][3]) {
    int matrizC[3][3];
    int sub;
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            sub = mA[i][j] - mB[i][j];
            matrizC[i][j] = sub;
        }
    }
    printf("SOMA:\n");
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            printf("|%d| ", matrizC[i][j]);
        }

        printf("\n");
    }
}

int mult(int mA[][3], int mB[][3]) {
    int matrizC[3][3];
    int mult;
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            mult = mB[i][j] * mA[i][j];
            matrizC[i][j] = mult;
        }
    }
    printf("SOMA:\n");
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            printf("|%d| ", matrizC[i][j]);
        }

        printf("\n");
    }
}

int main(int argc, char** argv) {
    int matrizA[3][3];
    int matrizB[3][3];
    bool fim;
    int i, l, c, j, n, op;
    fim = false;
    printf("Entre com a Primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da %dª linha e %dª coluna\n", i + 1, j + 1);
            scanf("%d", & n);
            matrizA[i][j] = n;
        }
    }
    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("|%d| ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Entre com a Primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da %dª linha e %dª coluna\n", i + 1, j + 1);
            scanf("%d", & n);
            matrizB[i][j] = n;
        }
    }
    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("|%d| ", matrizB[i][j]);
        }
        printf("\n");
    }
    do{  
    printf("\n");
    printf("====================================================================");
    printf("\nQual operação deseja realizar?");
    printf("\n1 - SOMA");
    printf("\n2 - SUBTRAÇÃO");
    printf("\n3 - MULTIPLICAÇÃO\n");
    printf("\n0 - SAIR\n");
    scanf("%d", &op);

   
        switch (op) {

            case 1:
                soma(matrizA, matrizB);
                break;
            case 2:
                sub(matrizA, matrizB);
                break;
            case 3:
                mult(matrizA, matrizB);
                break;
            case 0:
                fim = true;
            break;
            default:
                printf("\nNúmero inválido");
                break;

        }
    }while(fim != true);

    return (EXIT_SUCCESS);
}

