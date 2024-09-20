#include <stdio.h>

int main() {
    int numeros[10], i, j, chave;

    for(i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Insertion Sort
    for(i = 1; i < 10; i++) {
        chave = numeros[i];
        j = i - 1;

        while(j >= 0 && numeros[j] > chave) {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = chave;
    }

    printf("\nNúmeros ordenados em ordem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
