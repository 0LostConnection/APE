#include <stdio.h>
#define TAMANHO 3

void lerVetor(int vetor[], int tamanho);

int main() {
    int matriz[TAMANHO][TAMANHO];
    int diag1, diag2, diag3, diagPrincipal, prodDiagonalSecundaria, determinante;

    for (int i = 0; i < TAMANHO; i++) {
        printf("\nDigite os valores para o Vetor[%i] da Matriz:\n", i);
        lerVetor(matriz[i], TAMANHO);
    }

    // Diagonal Principal
    diag1 = matriz[0][0] * matriz[1][1] * matriz[2][2];
    diag2 = matriz[0][1] * matriz[1][2] * matriz[2][0];
    diag3 = matriz[0][2] * matriz[1][0] * matriz[2][1];

    diagPrincipal = diag1 + diag2 + diag3;

    // Diagonal Secundária
    diag1 = matriz[0][2] * matriz[1][1] * matriz[2][0];
    diag2 = matriz[0][0] * matriz[1][2] * matriz[2][1];
    diag3 = matriz[0][1] * matriz[1][0] * matriz[2][2];

    prodDiagonalSecundaria = diag1 + diag2 + diag3;

    printf("\nDiagonal Principal: %d\n", diagPrincipal);
    printf("Diagonal Secundária: %d\n", prodDiagonalSecundaria);

    determinante = diagPrincipal - prodDiagonalSecundaria;
    printf("Determinante da matriz: %d\n", determinante);

    return 0;
}

void lerVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}