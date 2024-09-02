#include <stdio.h>

int main() {
    int i = 0, N;

    printf("Digite um número: ");
    scanf("%d", &N);

    while (i < N) {
        printf("%d\n", ++i);
    }

    return 0;
}