#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

aluno_t *criar() {
    aluno_t *aluno;
    aluno = (aluno_t *)malloc(sizeof(aluno_t));

    if (aluno == NULL) {
        printf("Erro na criação do aluno!");
        return NULL;
    }

    printf("\nDigite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strlen(aluno->nome) - 1] = '\0';

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &aluno->faltas);
    fflush(stdin);

    printf("Digite a nota final: ");
    scanf("%f", &aluno->nota);
    fflush(stdin);

    aluno->prox = NULL;
    return aluno;
}

void imprimir(aluno_t *aluno) {
    printf("Estudante %s\nFaltas: %d\nNota: %.2f\nSituacao: %s\n\n", aluno->nome,
           aluno->faltas, aluno->nota,
           aluno->faltas < 15 && aluno->nota >= 7 ? "Aprovado" : "Reprovado");
}

int main() {
    aluno_t *primeiro_aluno, *aux;
    int continuar;
    // Criação da lista
    primeiro_aluno = criar();
    aux = primeiro_aluno;

    do {
        aux->prox = criar();
        if (aux->prox != NULL)
            aux = aux->prox;

        printf("\nDigite zero para parar (0 - parar): ");
        scanf("%d", &continuar);
        fflush(stdin);
    } while (continuar);

    // Exibir a lista
    aux = primeiro_aluno;

    while (aux != NULL) {
        imprimir(aux);
        aux = aux->prox;
    }

    // Liberar memória
    do {
        aux = primeiro_aluno;
        primeiro_aluno = aux->prox;
        printf("Limpando %s\n", aux->nome);
    } while (primeiro_aluno != NULL);

    return 0;
}