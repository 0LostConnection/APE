#include <stdio.h>

int main() {
    float monthly_salary, readjustment_percentage, adjusted_salary;

    printf("Simular reajuste salarial\n");

    printf("Salário Mensal: ");
    scanf("%f", &monthly_salary);

    printf("Percental de Reajuste: ");
    scanf("%f", &readjustment_percentage);

    adjusted_salary = monthly_salary + (monthly_salary * readjustment_percentage / 100);

    printf("Salário Reajustado: R$%.2f\n", adjusted_salary);

    return 0;
}