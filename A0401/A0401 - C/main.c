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
 
int mult(int m, int n){
	int mn;
    if(n>0){
    	n = n-1;;
    	mn = m;
    }
    if(n<0){
    	n = n+1;
    	mn = -m;
    } 
    if(n==0)
        return mn;
    else
        return mn + mult(m,n);
}
 
int main(){
    int m,n,result;
    printf("Digite o Número1 x Número2:\n");
    scanf("%d%d",&m,&n);
    result = mult(m,n);
    printf("%d X %d = %d\n",m,n,result);
 
    return 0;
 
}