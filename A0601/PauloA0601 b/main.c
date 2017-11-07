/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 31 de Outubro de 2017, 17:26
 */

#include <stdio.h>
#include <stdbool.h>

#include "pilhaestatica.h"

int main(int argc, char** argv) {

    struct Pilha Pi;
    bool fim;
    int opcao;
    char caractere;
    fim = false;
    
    iniciarPilha(&Pi);

    do {
        printf("\n============= Pilha de Caracteres ================");
        printf("\n Escolha uma opçao:");
        printf("\n 1- Adicionar Caracter");
        printf("\n 2- Remover Caracter");
        printf("\n 3- Mostrar topo da pilha");
        printf("\n 4- Mostrar todos elementos da pilha");
        printf("\n 5- Verificar se é Palindrome");
        printf("\n 6- Sair");        
        printf("\n==================================================\n");
        
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                if (cheia(Pi) == NAO) {
                    printf("\nDigite um caractere:");
                    fflush(stdin);
                    caractere = getc(stdin);
                    inserir(&Pi, caractere);
                    
                } else {
                    printf("\nA pilha está cheia, remova um item para poder inserir um caractere!");
                };
                break;

            case 2:
                if (vazia(Pi) == SIM) {
                    caractere = vazia(Pi);
                    printf("\nItem removido;");
                } else {
                    printf("\nA pilha está vazia, não existem itens para serem removidos");
                };
                break;

            case 3:
                if (vazia(Pi) == NAO) {
                    caractere = obterTopo(Pi);
                    printf("Caractere do topo = %c",caractere);
                } else {

                    printf("\nPilha vazia!");

                };
                break;

            case 4:
                listarElementos(Pi);
                break;               
                

            case 5:
                if (palindrome(Pi) == SIM){
                    printf("A Pilha é palindrome");
                }else{
                     printf("A Pilha não é palindrome");
                }
                break;


            case 6:
                fim = true;
                break;
            default:
                printf("\nOpção inválida, escolha novamente!");

        }


    } while (fim = false);

    return 0;
}

