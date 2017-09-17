/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: user
 *
 * Created on 17 de Setembro de 2017, 17:28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <c++/bits/allocated_ptr.h>
#include "Conta.h"

/*
 * 
 */
int main(int argc, char** argv) {

    struct Conta c1;
    char n[100];
    int num;
    float s;
    bool fim;
    int op;
    fim = false;
    printf("Digite o nome do dono da conta");
    fgets(n, 100, stdin);
    c1.nome = get(n);
    printf("Digite o numero da conta");
    scanf("%d", &num);
    c1.numero = num;

    printf("\n======== Banco IFSP ===============================================\n");
    printf("\n1 - Abrir conta:");
    printf("\n2 - Lançar Crédito:");
    printf("\n3 - Lançar Débito:");
    printf("\n4 - Exibir Saldo:");
    printf("\n0 - SAIR:");

    do {
        switch (op) {
            case 1:
                AbrirConta(&c1);
                break;
            case 2:
                lancarCredito(&c1);
                break;
            case 3:
                lancarDebito(&c1);
                break;
            case 4:
                ExibirSaldo(&c1);
                break;
            case 0:
                fim = true;
                break;
            default:
                printf("Número Inválido");
                break;

        }

    } while (fim != true);

    return (EXIT_SUCCESS);
}

void AbrirConta(struct Conta *c) {
    printf("\n ============ Conta ===========");
    printf("\n Nome: %s", c->nome);
    printf("\n Número: %d", c->numero);
    c->saldo = 0;
}

void lancarCredito(struct Conta *c) {
    float credito;
    if (Conta.numero > 0) {
        printf("Digite o valor a ser creditado:")
        scanf("%f", &credito);
        printf("\n ============ Conta ===========");
        printf("\n Nome: %s", c->nome);
        printf("\n Número: %d", c->numero);
        c->saldo += credito;
    } else {
        printf("Abra Uma conta");
    }
}

void lancarDebito(struct Conta *c) {
    float debito;
    if (Conta.numero > 0 && Conta.saldo > 0) {
        printf("Digite o valor a ser creditado:")
        scanf("%f", &debito);
        printf("\n ============ Conta ===========");
        printf("\n Nome: %s", c->nome);
        printf("\n Númer:o %d", c->numero);
        c->saldo += debito;
    } else {
        if (Conta.numero < 0) {
            printf("Abra Uma conta");
        } else {
            printf("Sem Saldo!");
        }
    }
}

void ExibirSaldo(struct Conta *c) {
    printf("\n ============ Conta ===========");
    printf("\n Nome: %s", c->nome);
    printf("\n Número: %d", c->numero);
    printf("\n Saldo: %f", c->saldo);
    c->saldo = 0;
}




