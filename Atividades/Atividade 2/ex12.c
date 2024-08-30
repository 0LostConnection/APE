#include <stdio.h>

int main() {
    int clientAccountId;
    float initialBalance, currentBalance, debit, credit;

    printf("Digite o número da conta do cliente: ");
    scanf("%d", &clientAccountId);

    printf("Digite o saldo inicial: ");
    scanf("%f", &initialBalance);

    printf("Digite o débito: ");
    scanf("%f", &debit);

    printf("Digite o crédito: ");
    scanf("%f", &credit);

    currentBalance = initialBalance - debit + credit;

    printf("\nCliente: %d\nSaldo atual: R$ %.2f ", clientAccountId, currentBalance);

    if (currentBalance >= 0) {
        printf("(Saldo Positivo)\n");
    } else {
        printf("(Saldo Negativo)\n");
    }

    return 0;
}