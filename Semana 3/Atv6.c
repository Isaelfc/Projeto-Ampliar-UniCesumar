/*
    Escreva um programa que receba 10 n�meros inteiros e o liste na tela de traz pra frente.
*/

#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int numero[10];

    for(int i = 0; i < 10; i++){
        printf("Informe um n�mero: ");
        scanf("%d", &numero[i]);
    }

    for(int i = 9; i >= 0; i--) {
        printf(" %d ", numero[i]);
    }

    return 0;
}