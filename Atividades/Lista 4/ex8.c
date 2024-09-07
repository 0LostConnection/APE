#include <stdio.h>

int verificarNumero(int n);

int main() {
    int n;

    printf("Verificar Número!\n: ");
    scanf("%d", &n);

    switch (verificarNumero(n)) {
    case 0:
        printf("\nO número é nulo!\n");
        break;

    case -1:
        printf("\nO número é negativo!\n");
        break;

    default:
        printf("\nO número é positivo!\n");
        break;
    }

    return 0;
}

int verificarNumero(int n) {
    if (n > 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        return -1;
}