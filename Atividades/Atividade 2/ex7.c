#include <stdio.h>

int main() {
    float fixed_salary, sales_value, commission_ammout, final_salary;
    int cars_sold;

    printf("Simular salário final\n");

    printf("Salário fixo: ");
    scanf("%f", &fixed_salary);

    printf("Valor total das vendas: ");
    scanf("%f", &sales_value);

    printf("Valor da comissão: ");
    scanf("%f", &commission_ammout);
    
    printf("Carros vendidos: ");
    scanf("%d", &cars_sold);

    final_salary = fixed_salary + (commission_ammout * cars_sold) + (sales_value * 5 / 100);

    printf("Salário final: R$%.2f\n", final_salary);

    return 0;
}