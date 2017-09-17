/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 10 de Setembro de 2017, 16:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char nomes[10][100];
    char end[10][100];
    int i, pos, a;
    bool fim;
    fim = false;
    printf("Digite 10 nomes, e seus respectivos endereços: \n");

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº nome\n", i + 1);
        fgets(nomes[i], 100, stdin);
        printf("Digite o %dº endereço\n", i + 1);
        fgets(end[i], 100, stdin);
        printf("=======================================================\n");
    }
    printf("Lista:\n");

    do {
        printf("Digite uma posição de 1 a 10  (0 para sair)\n ");
        scanf("%d", &pos);

        if (pos == 0) {
            fim = true;
        } else {
            if (pos > 0 && pos < 11) {
                a = pos - 1; //a é uma variavel aux pra receber valor-1 e achar o valor digitado correspondente no laço	
                printf("%d = Nome: %s, Endereco:%s\n", a + 1, nomes[a], end[a]);
            } else {
                printf("Posição inválida!\n");
            }
        }

    } while (fim == false);


    return (EXIT_SUCCESS);
}



