#include <stdio.h>

int main() {
    int number;
    
    printf("Digite a quantidade de maçãs a serem compradas:\n");
    scanf("%d", &number);

    if (number >= 12) {
        printf("\n\nPreço total: R$%.2f\n", (float)number);
    } else {
        printf("\n\nPreço total: R$%.2f\n", number * 1.30);
    }
}