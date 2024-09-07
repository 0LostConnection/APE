#include <stdio.h>

int absoluto(int n);

int main() {
    int n1, n2, n3, n4, n5;

    printf("Valor 1: ");
    scanf("%d", &n1);

    printf("Valor 2: ");
    scanf("%d", &n2);

    printf("Valor 3: ");
    scanf("%d", &n3);

    printf("Valor 4: ");
    scanf("%d", &n4);

    printf("Valor 5: ");
    scanf("%d", &n5);

    absoluto(n1);
    absoluto(n2);
    absoluto(n3);
    absoluto(n4);
    absoluto(n5);

    return 0;
}

int absoluto(int n) {
    if (n >= 0) {
        printf("|%d| = %d\n", n, n);
    } else {
        printf("|%d| = %d\n", n, n * -1); // Multiplica-se por -1 para transformar um valor negativo em positivo
    }
}