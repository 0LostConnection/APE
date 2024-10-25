#include "complexo.h"
#include <stdio.h>
#define true 1

int main() {
    Complexo num1, num2, resultado;
    char op;

    while (true) {
        printf("Digite o primeiro numero complexo, formato: (A Bi): ");
        scanf("%lf %lf", &num1.real, &num1.imag);

        printf("Digite o primeiro numero complexo, formato: (A Bi): ");
        scanf("%lf %lf", &num2.real, &num2.imag);

        printf("Escolha a operacao (+, -, *, /): ");
        scanf(" %c", &op);

        switch (op) {
        case '+':
            resultado = adicionar(num1, num2);
            break;

        case '-':
            resultado = subtrair(num1, num2);
            break;

        case '*':
            resultado = multiplicar(num1, num2);
            break;

        case '/':
            if (num2.real == 0 && num2.imag == 0) {
                printf("Erro: Nao e possivel dividir por 0!\n");
                return 1;
            }
            
            resultado = dividir(num1, num2);
            break;

        default:
            printf("Operacao invalida.\n");
            return 1;
        }

        printf("Resultado:\n%.2f + %.2fi\n\n", resultado.real, resultado.imag);
    }

    return 0;
}