#include <stdio.h>

int main() {
    float n1, n2, avarege;

    do {
        printf("Digite a nota 1: ");
        scanf("%f", &n1);

        if (n1 < 0 || n1 > 10)
            printf("Valor inválido. Por favor digite um valor que esteja entre 0 e 10.\n\n");

    } while (n1 < 0 || n1 > 10);

    do {
        printf("Digite a nota 2: ");
        scanf("%f", &n1);

        if (n1 < 0 || n1 > 10)
            printf("Valor inválido. Por favor digite um valor que esteja entre 0 e 10.\n\n");

    } while (n1 < 0 || n1 > 10);

    avarege = (n1 + n2) / 2;

    printf("\nMédia: %.2f\n", avarege);

    return 0;
}