#include <stdio.h>

int main() {
    int Q[20], maior, maiorIndex;

    for (int i = 0; i < 20; i++) {
        do {
            printf("Digite o valor da posição %d: ", i);
            scanf("%d", &Q[i]);
        } while (Q[i] < 0);
    }

    maior = Q[0];
    maiorIndex = 0;

    for (int i = 1; i < 20; i++) {
        if (maior < Q[i]) {
            maior = Q[i];
            maiorIndex = i;
        }
    }

    printf("Maior elemento do vetor: %d\nPosição: %d\n", maior, maiorIndex);
}