// Calculadora com Switch e If 

#include <stdio.h>

int main() {
    float a, b;
    char operation;

    printf("Calculadora - Operações permitidas (+) (-) (/) (*)\n");
    printf("Número 1: ");
    scanf("%f", &a);

    printf("Operação: ");
    scanf(" %c", &operation);

    printf("Número 2: ");
    scanf("%f", &b);

    switch(operation) {
        case '+':
            printf("\n%.2f", a + b);
            break;

        case '-':
            printf("\n%.2f", a - b);
            break;

        case '/':
            if (a == 0) {
                printf("\nOperação inválida!");
                return 1;
            }

            printf("\n%.2f", a / b);
            break;

        case '*':
            printf("\n%.2f", a * b);
            break;
            
        default:
            printf("\nOperação inválida!");
            return 1;
    }

    return 0;
}