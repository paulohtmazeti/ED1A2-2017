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

int soma(int num1, int num2) {
    int R;
    R = num1 + num2;
    return R;

}

int main(int argc, char** argv) {
    int n1, n2, n3;
    
    n1 = 100;
    n2 = 200;
    
    printf("A soma de 10 com 20 é %i\n", soma(10, 20));
    printf("A soma de n1 com n2 é %i\n", soma(n1, n2));
    
    n3 = soma(1000, 2000);
    
    printf("A soma de 1000 com 2000 (n3) e %i", n3);

    return (EXIT_SUCCESS);
}