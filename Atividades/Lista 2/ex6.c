#include <stdio.h>

int main() {
    int number1, number2;

    printf("Digite um número: ");
    scanf("%d", &number1);

    printf("Digite outro número: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("%.2f\n", number1);
    } else {
        printf("%.2f\n", number2);
    }
}