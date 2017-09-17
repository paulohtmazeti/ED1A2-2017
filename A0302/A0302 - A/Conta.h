/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Conta.h
 * Author: user
 *
 * Created on 17 de Setembro de 2017, 17:29
 */

#ifndef CONTA_H
#define CONTA_H

#ifdef __cplusplus
extern "C" {
#endif

struct Conta{
    char nome[100];
    int numero;
    float saldo;
};

void AbrirConta(struct Conta *c);
void lancarCredito(struct Conta *c);
void lancarDebito(struct Conta *c);
void ExibirSaldo(struct Conta *c);



#ifdef __cplusplus
}
#endif

#endif /* CONTA_H */

