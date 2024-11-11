#include "pediatria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    float abaixo_do_normal;
    float normal_min;
    float normal_max;
    float sobrepeso_min;
    float sobrepeso_max;
    float obesidade;
} faixa_imc_t;

paciente_t *primeiro_paciente(char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *paciente;
    paciente = (paciente_t *)malloc(sizeof(paciente_t));

    if (paciente == NULL) {
        printf("Erro na criação do paciente!");
    }

    strcpy(paciente->nome, nome);
    paciente->idade = idade;
    paciente->peso = peso;
    paciente->altura = altura;
    paciente->genero = genero;
    paciente->prox = NULL;
    return paciente;
}

void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero) {
    paciente_t *temp_paciente;
    temp_paciente = (paciente_t *)malloc(sizeof(paciente_t));

    if (temp_paciente == NULL) {
        printf("Erro na criação do paciente!");
    }

    strcpy(temp_paciente->nome, nome);
    temp_paciente->idade = idade;
    temp_paciente->peso = peso;
    temp_paciente->altura = altura;
    temp_paciente->genero = genero;
    temp_paciente->prox = NULL;

    // Percorrendo até o último paciente da lista
    paciente_t *atual = primeiro;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    // Inserindo o novo paciente no final da lista
    atual->prox = temp_paciente;
}

IMCInfantil verificar_imc(char genero, int idade, float imc) {
    int tamanho_faixas;
    faixa_imc_t *faixas;

    faixa_imc_t faixasM[] = {
        {6, 14.5, 14.5, 16.6, 16.7, 18.0},
        {7, 15.0, 15.0, 17.3, 17.4, 19.1},
        {8, 15.6, 15.6, 16.7, 16.8, 20.3},
        {9, 16.1, 16.1, 18.8, 18.9, 21.4},
        {10, 16.7, 16.7, 19.6, 19.7, 22.5},
        {11, 17.2, 17.2, 20.3, 20.4, 23.7},
        {12, 17.8, 17.8, 21.1, 21.2, 24.8},
        {13, 18.5, 18.5, 21.9, 22.0, 25.9},
        {14, 19.2, 19.2, 22.7, 22.8, 26.9},
        {15, 19.9, 19.9, 23.6, 23.7, 27.7}};

    faixa_imc_t faixasF[] = {
        {6, 14.3, 14.3, 16.1, 16.2, 17.4},
        {7, 14.9, 14.9, 17.1, 17.2, 18.9},
        {8, 15.6, 15.6, 18.1, 18.2, 20.3},
        {9, 16.3, 16.3, 19.1, 19.2, 21.7},
        {10, 17.0, 17.0, 20.1, 20.2, 23.2},
        {11, 17.6, 17.6, 21.1, 21.2, 24.5},
        {12, 18.3, 18.3, 22.1, 22.2, 25.9},
        {13, 18.9, 18.9, 23.0, 23.1, 27.7},
        {14, 19.3, 19.3, 23.8, 23.9, 27.9},
        {15, 19.6, 19.6, 24.2, 24.3, 28.8}};

    switch (genero) {
    case 'M':
        faixas = faixasM;
        tamanho_faixas = sizeof(faixasM); // / sizeof(faixas[0]);
        break;
    case 'F':
        faixas = faixasF;
        tamanho_faixas = sizeof(faixasF); // / sizeof(faixas[0]);
        break;
    }

    for (int i = 0; i < tamanho_faixas; i++) {
        if (faixas[i].idade == idade) {
            if (imc < faixas[i].abaixo_do_normal) {
                return ABAIXO;
            } else if (imc >= faixas[i].normal_min && imc <= faixas[i].normal_max) {
                return NORMAL;
            } else if (imc >= faixas[i].sobrepeso_min && imc <= faixas[i].sobrepeso_max) {
                return SOBREPESO;
            } else {
                return OBESIDADE;
            }
        }
    }
}

IMCInfantil calcula_imc(paciente_t *crianca) {
    float imc = crianca->peso / (crianca->altura * crianca->altura);
    return verificar_imc(crianca->genero, crianca->idade, imc);
}