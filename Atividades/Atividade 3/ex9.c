#include <stdio.h>

int main() {
    /*
    hoursWorkedMonth   =  horas trabalhadas em um mes
    overtimeWorked     =  horas extras trabalhadas
    hourlyWage         =  salário por hora
    totalWage          =  saláiro total
    */
    float hoursWorkedMonth, overtimeWorked, hourlyWage, totalWage;

    printf("Horas trabalhadas em um mês: ");
    scanf("%f", &hoursWorkedMonth);

    printf("Salário por hora: ");
    scanf("%f", &hourlyWage);

    // Operador ternário - SE hoursWorkedMonth FOR MAIOR QUE  160, overtimeWorked SERÁ hoursWorkedMonth - overtimeWorked, SENÃO, overtimeWorked SERÁ 0
    overtimeWorked = (hoursWorkedMonth > 160) ? hoursWorkedMonth - 160 : 0;

    totalWage = (hoursWorkedMonth - overtimeWorked) * hourlyWage + (overtimeWorked * hourlyWage * 1.5);

    printf("Salário total: R$%.2f\n", totalWage);

    return 0;
}