#include <stdio.h>

int main() {
    int A[10], M[10], x;

    for (int i = 0; i <= 10; i++) {
        if (i == 10) {
            printf("\nDigite o número para multiplicar: ");
            scanf("%d", &x);
            break;
        }

        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        M[i] = A[i] * x;
    }

    for (int i = 0; i < 10; i++) {
        printf("M[%d] = %d\n", i, M[i]);
    }

    return 0;
}