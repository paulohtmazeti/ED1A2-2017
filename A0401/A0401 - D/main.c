/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 17 de Setembro de 2017, 16:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void binario(int);

int main(int argc, char** argv) {
    int n;
    scanf("Digite um número para saber sua equivalencia em binário:\n")
    scanf("%d", &n);
    binario(n);
    return (EXIT_SUCCESS);
}

void binario(int n) {
    if (n <= 1) {
        printf("%d", n);
        return;
    } else {
        if ((n > 1) && (n <= 3)) {
            printf("%d", n / 2);
            printf("%d", n % 2);
            return;
        } else {
            binario(n / 2);
            printf("%d", n % 2);
        }
    }


}

