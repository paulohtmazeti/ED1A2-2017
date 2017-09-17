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

/*
 * 
 */
int main(int argc, char** argv) {
    int vetorA[5];
    int vetorB[5];
    int vetorC[10];
    int i,j,n;
    j = 0;
    printf("===================\n");
    printf("Mix de vetores\n");
    printf("===================\n");

    printf("Cinco primeiros números:\n");
    
    for(i=0;i<5;i++){
    	printf("Digite o %d número\n",i+1);
    	scanf("%d",&vetorA[i]);
	}
	printf("Cinco segundos números:\n");
    for(i=0;i<5;i++){
    	printf("Digite o %d número\n",i+1);
    	scanf("%d",&vetorB[i]);
    	
	}
	for(i=0;i<=5;i++){
    	 vetorC[j] = vetorA[i];
    	 j=j+1;
    	 vetorC[j] = vetorB[i];
    	 j=j+1;
	}
	
	printf("Vetores Misturados:\n");
		for(i=0;i<9;i++){
    	printf("%d \n", vetorC[i]);
	}
	
	
	

    return (EXIT_SUCCESS);
}

