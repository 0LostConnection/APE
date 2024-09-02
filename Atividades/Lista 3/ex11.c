#include <stdio.h>

int main() {
    int i = 0, N;

    do {
        printf("Digite um número: ");
        scanf("%d", &N);

        if (N > 0) {
            while (i < N) {
                printf("%d\n", ++i);
            }
            break;
        }

        printf("O número precisa ser maior que 0!\n\n");

    } while (N <= 0);

    return 0;
}