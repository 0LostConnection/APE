#include <stdio.h>

int main() {
    float factory_cost, final_cost, distributor_percentage_value, taxes_percentage_value, distributor_percentage = 28, taxes_percentage = 45;

    printf("Simular o preço final do seu carro novo\n");

    printf("Custo do carro novo: ");
    scanf("%f", &factory_cost);

    distributor_percentage_value = factory_cost * distributor_percentage / 100;
    taxes_percentage_value = factory_cost * taxes_percentage / 100;

    final_cost = factory_cost + distributor_percentage_value + taxes_percentage_value;

    printf("Custo final: R$%.2f\n", final_cost);

    return 0;
}