#include <stdio.h>

int main() {
    int base, height;

    float result;

    printf("Calculadora da Área de um Triângulo Retângulo");

    printf("\nBase: ");
    scanf("%d", &base);

    printf("\nAltura: ");
    scanf("%d", &height);

    if (base <= 0 || height <= 0) {
        printf("\nOs parâmetros \"Base\", ou \"Altura\" não podem ser menores que 0!\n");
        return -1;
    }

    result = (float)(base * height) / 2;

    printf("\nÁrea: %.1f centímetros quadrados\n", result);

    return 0;
}