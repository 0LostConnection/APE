#include <stdio.h>

int menorNumero(int x, int y);

int main() {
    int x, y;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite um segundo número: ");
    scanf("%d", &y);

    printf("%d\n", menorNumero(x, y));

    return 0;
}

int menorNumero(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}