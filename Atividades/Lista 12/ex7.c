#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maximo_frequência = 100; // Número máximo de aulas

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    float frequencia;
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

    // Cálculo da frequência
    aluno->frequencia = ((maximo_frequência - aluno->faltas) / (float)maximo_frequência) * 100;

    return aluno;
}

void verificar_aprovacao(aluno_t *aluno) {
    if (aluno->nota >= 7 && aluno->frequencia >= 75) {
        printf("O aluno %s foi aprovado!\n", aluno->nome);
    } else {
        printf("O aluno %s nao foi aprovado.\n", aluno->nome);
    }

    printf("Frequencia do aluno: %.2f%%\n", aluno->frequencia);
}

int main() {
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));

    if (aluno == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    criar_aluno(aluno);
    verificar_aprovacao(aluno);

    free(aluno);
    return 0;
}
