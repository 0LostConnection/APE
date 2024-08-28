#include <stdio.h>

int main() {
    float fixedWage, totalSellsValue, extraSellsValue, totalWage;

    printf("Salário fixo: ");
    scanf("%f", &fixedWage);

    printf("Valor das total das vendas: ");
    scanf("%f", &totalSellsValue);

    extraSellsValue = (totalSellsValue > 1500) ? totalSellsValue - 1500 : 0;

    totalWage = (totalSellsValue - extraSellsValue) * 0.03 + (extraSellsValue * 0.05) + fixedWage;

    printf("Salário final: R$%.2f", totalWage);
}