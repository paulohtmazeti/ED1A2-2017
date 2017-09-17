/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 10 de Setembro de 2017, 16:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int vetor[10];
    int pares[10];
    int impares[10];

    int n, cont, par, impar, i;
    bool fim;
    cont = 0;
    impar = 0;
    par = 0;
      for (i = 0; i <= 10; i++) {
         impares[i] = 0;
    }
    for (i = 0; i <= 10; i++) {
        pares[i]=0;
    }
    while ((fim == false) && (cont <= 10)){
        printf("Digite um número de 1 a 100  (-1 para sair)\n ");
        scanf("%d", &n);

        if (n == -1) {
            fim = true;
        } else {
            if (n > 0 && n < 101) {
                if (n % 2 == 0) {
                    
                    pares[par] = n;
                    par = par + 1;
                } else {
                    
                    impares[impar] = n;
                    impar = impar + 1;
                    
                }
                cont = cont + 1;
            } else {
                printf("Posição inválida!\n");
                cont = cont - 1;
            }
        }
    } 

    printf("Foram informados %d Números.\n", cont);
    printf("%d, Pares:\n", par);
    for (i = 0; i < par; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");
    printf("%d, Impares:\n", impar);
    for (i = 0; i < par; i++) {
        printf("%d ", impares[i]);
    }

    return (EXIT_SUCCESS);
}

