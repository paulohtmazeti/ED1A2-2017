#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "listacabecalho.h"

int main(int argc, char** argv) {
    struct Lista;




    printf("\nIniciar Lista");
    iniciarLista(&Lista);
    mostrarLista(Lista);
    //
    printf("\nInserir n lista")
    inserir(&Lista, POS_FINAL, 'P');
    inserir(&Lista, POS_FINAL, 'A');
    inserir(&Lista, POS_FINAL, 'U');
    inserir(&Lista, POS_FINAL, 'L');
    inserir(&Lista, POS_FINAL, 'O');
    mostrarLista(Lista);
    //
    printf("\nInserir ordenado");
    inserirOrdenado(&Lista, 'A');
    mostrarLista(Lista);
    //
    printf("\nAcessar");
    acessar(Lista, 1);
    printf("\n %d", 1);
    mostrarLista(Lista);
    //
    printf("Alterar");
    alterar(&Lista, 4, 'X');
    mostrarLista(Lista);

    //
    printf("\nRemover");
    remover(&Lista, 2);
    mostrarLista(Lista);
    //
    printf("Inverter");
    inverter(&Lista);
    mostrarLista(Lista);
    //
    printf("Mostrar Lista");
    mostrarLista(Lista);
    //
    printf("Concatenar");
    iniciarLista(&Lista);
    inserir(&Lista, POS_FINAL, 'F');
    inserir(&Lista, POS_FINAL, 'A');
    inserir(&Lista, POS_FINAL, 'B');
    inserir(&Lista, POS_FINAL, 'I');
    concatenar(&Lista, &Lista); //2);
    mostrarLista(Lista);

    //
}