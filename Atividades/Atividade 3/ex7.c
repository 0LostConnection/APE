#include <stdio.h>

int main() {
    int number1, number2;

    printf("Digite um número: ");
    scanf("%f", &number1);

    printf("Digite outro número: ");
    scanf("%f", &number2);

    if (number1 > number2) {
        printf("%.2f, %.2f\n", number1, number2);
    } else {
        printf("%.2f, %.2f\n", number2, number1);
    }
}