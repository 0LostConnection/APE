#include <stdio.h>

void lerVetor(int vetor[], int tamanho, char *nome);

int main() {
    int tamanho = 15, soma = 0;
    int V1[tamanho], V2[tamanho];

    lerVetor(V1, tamanho, "V1");
    lerVetor(V2, tamanho, "V2");

    for (int i = 0; i < tamanho; i++) {
        if (V1[i] == V2[i])
            soma++;
    }

    printf("Números repetidos na mesma posição: %d\n", soma);

    return 0;
}

void lerVetor(int vetor[], int tamanho, char *nome) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para %s[%d] = ", nome, i);
        scanf("%d", &vetor[i]);
    }
}