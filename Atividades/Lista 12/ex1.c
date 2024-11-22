#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

void *criar_aluno(aluno_t *aluno) {
    if (aluno == NULL) {
        printf("Erro na criação do aluno!\n");
        return NULL;
    }

    printf("\nDigite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0';

    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota final do aluno: ");
    scanf("%f", &aluno->nota);

    return aluno;
}

void imprimir(aluno_t *aluno) {
    printf("Estudante: %s\nFaltas: %d\nNota: %.2f\nSituacao: %s\n\n", aluno->nome,
           aluno->faltas, aluno->nota,
           aluno->faltas < 15 && aluno->nota >= 7 ? "Aprovado" : "Reprovado");
}

int main() {
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    criar_aluno(aluno);

    if (aluno != NULL) {
        imprimir(aluno);
        free(aluno);
    }
    return 0;
}