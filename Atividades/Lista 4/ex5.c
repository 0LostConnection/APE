#include <stdio.h>

int lerNumero();

int somaDivisores(int n);

int main() {
    int numero;

    for (int i = 0; i < 5; i++) {
        numero = lerNumero();
        int soma = somaDivisores(numero);

        printf("A soma dos divisores de %d é: %d\n\n", numero, soma);
    }

    return 0;
}

int somaDivisores(int n) {
    int soma = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    
    return soma;
}

int lerNumero() {
    int n = 0;

    while (n <= 0) {
        printf("Digite um Número: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Número inválido!\n\n");
        }
    }
}