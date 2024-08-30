#include <stdio.h>

int main() {
    int number;
    printf("Digite um número: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("Esse número é positivo!\n");
    } else {
        printf("Esse número é negativo!\n");
    }
}