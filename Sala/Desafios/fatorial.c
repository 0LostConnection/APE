#include <stdio.h>

int main() {
    int number, i = 1, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &number);

    while (i <= number) {
        fatorial *= i;
        i++;
    }

    printf("%d", fatorial);
    return 0;
}