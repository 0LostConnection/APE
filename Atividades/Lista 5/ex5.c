#include <stdio.h>

int main() {
    int A[20];

    for (int i = 0; i < 20; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");

    for (int i = 0; i < 20; i++) {
        printf("A[%d] = %d\n", 19 - i, A[19 - i]);
    }

    return 0;
}