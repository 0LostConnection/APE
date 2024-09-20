#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numAleatorio(int min, int max);

int main() {
    int tamanho = 30;
    int V[tamanho], x, soma;

    srand(time(NULL));

    for (int i = 0; i <= tamanho; i++) {
        if (i == tamanho) {
            printf("\n\nDigite um número para verificar: ");
            scanf("%d", &x);
            break;
        }

        V[i] = numAleatorio(0, 50);
        printf("%d ", V[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        if (V[i] == x)
            soma++;
    }

    printf("O número %d aparece %d vezes.", x, soma);

    return 0;
}

int numAleatorio(int min, int max) {

    return (rand() % (max - min + 1)) + min;
}