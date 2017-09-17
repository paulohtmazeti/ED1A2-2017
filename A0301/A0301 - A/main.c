/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 10 de Setembro de 2017, 16:40
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main(int argc, char** argv) {
    char nomes[100][10];    
    int i;
    printf("Digite 10 nomes\n");

    for (i=0;i<10;i++) {
        printf("Digite o %dº nome\n", i + 1);
        fgets(nomes[i], 100, stdin);
          }
    printf("Lista:\n");

    for(i=0;i<10;i++){
        printf("%s\n",nomes[i]);    
    }

    

    return (EXIT_SUCCESS);
}
