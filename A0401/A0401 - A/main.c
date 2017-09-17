/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 17 de Setembro de 2017, 16:22
 */


#include <stdio.h>


int main(int argc, char** argv) {

    int numero;
    int f;

    printf("Digite o numero que deseja calcular o fatorial:\n ");
    scanf("%d", &numero);
    f = fatorial(numero);
    printf("Fatorial de %d = %d", numero, f);


    return 0;
}
int fatorial(int n) {

    int valor;
    if (n <= 1)

        return (1);
    else {
        valor = n * fatorial(n - 1);
        return (valor);
    }
}

