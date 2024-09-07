#include <stdio.h>

int potencia(int base, int expoente);

int main() {
    printf("%d", potencia(3, 4));

    return 0;
}

int potencia(int base, int expoente) {
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}