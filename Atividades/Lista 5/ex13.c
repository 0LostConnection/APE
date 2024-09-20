#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numAleatorio(int min, int max);

int main() {
    int tamanho = 50;
    int VET[tamanho], soma;
    int repetido;

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        VET[i] = numAleatorio(0, 10);
        printf("%d ", VET[i]);
    }

    printf("\n");

    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (VET[i] == VET[j]) {
                printf("Número repetido %d encontrado na posição %d e %d\n", VET[i], i, j);
            }
        }
    }

    printf("Não há números repetidos no vetor.\n");

    return 0;
}

int numAleatorio(int min, int max) {

    return (rand() % (max - min + 1)) + min;
}