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
#include <stdlib.h>

/*
 * 
 */


int main(int argc, char** argv) {
    int n,f;
    printf("Digite um número para saber a sequencia Fibonacci até ele:\n");
    scanf("%d", &n);
    f = fibonacci(n);
    printf("Fibonacci de %d = %d",n,f);

    return (EXIT_SUCCESS);
}

int fibonacci(int n) {
    if (n == 1) {
        
        return 0;
    } else {
        if ((n == 2) || n == 3) {
             
            return 1;
        } else {
             
            return fibonacci(n - 1) + fibonacci(n - 2);
           
        }
    }

}


