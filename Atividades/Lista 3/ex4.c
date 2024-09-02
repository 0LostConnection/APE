#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    do {

        printf("\nDigite um segundo número: ");
        scanf("%d", &num2);

        if (num2 == 0)
            printf("VALOR INVÁLIDO\n");
    } while (num2 == 0);

    printf("Número 1: %d\nNúmero 2: %d\nDivisão: %.2f\n", num1, num2, (float)num1 / (float)num2);

    return 0;
}