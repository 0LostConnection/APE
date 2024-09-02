#include <stdio.h>

int main() {
    int n, i;

    do {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    i = 1;

    printf("\n");

    while (i <= 10) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
