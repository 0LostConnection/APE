#include <stdio.h>

int main() {
    int n;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int A[n], B[n], SOMA[n];

    printf("\nDigite os valores do vetor A[%d]:\n", n);
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os valores do vetor B[%d]:\n", n);
    for (int i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++) {
        SOMA[i] = A[i] + B[i];
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("SOMA[%d] = %d\n", i, SOMA[i]);
    }

    return 0;
}