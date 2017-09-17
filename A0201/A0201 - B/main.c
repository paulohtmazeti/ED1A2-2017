/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 17 de Setembro de 2017, 12:32
 */

#include <stdio.h>
#include <stdlib.h>

int process(int num1, int num2, int *num3) {
    num1 *= 10;
    num2 *= 100;
    *num3 = (*num3)*1000;
    
    printf("O valor de n1 em process %i\n", num1);
    printf("O valor de n2 em process %i\n", num2);
    printf("O valor de n3 em process %i\n", *num3);
}

int main(int argc, char** argv) {
    
    int n1, n2, n3;
    int*N3;
    n1 = 1;
    n2 = 2;
    n3 = 3;
    N3 = &n3;
    process(n1, n2, N3);
    printf("O valor de n1 é %i\n", n1);
    printf("O valor de n2 é %i\n", n2);
    printf("O valor de n3 é %i\n", N3);

    return (EXIT_SUCCESS);
}