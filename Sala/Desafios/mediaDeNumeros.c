/*
Faça um programa que leia números reias maiores que zero. Quando for entrado o número zero,
O programa deverá apresentar quantos números foram entrados e a média destes.

*/

#include <stdio.h>

int main() {
    int i = 0;
    float input, numeros = 0;

    do {
        printf("Digite um número: ");
        scanf("%f", &input);

        numeros += input;

        if (input != 0)
            i++;

    } while (input != 0);

    printf("\nI: %d Total: %d\nMédia: %.2f\n", i, numeros, numeros / i);

    return 0;
}