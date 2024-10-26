#include "paciente.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int gerarNumeroAleatorio(int min, int max);
void concatenarNumeros(int num1, int num2, int *resultado);

void alocacao_paciente(paciente_t *paciente, char *nome, short idade) {
    srand(time(NULL));

    int leito;
    concatenarNumeros(gerarNumeroAleatorio(1, 5), gerarNumeroAleatorio(0, 10), &leito);

    strcpy(paciente->nome, nome);
    paciente->idade = idade;
    paciente->leito = leito;
}

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void concatenarNumeros(int num1, int num2, int *resultado) {
    if (num1 < 1 || num1 > 5 || num2 < 0 || num2 > 10) {
        exit(1);
    }

    *resultado = num1 * 100 + num2;
}