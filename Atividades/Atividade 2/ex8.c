#include <stdio.h>

int main() {
    float c_temp, f_temp;

    printf("Converta Fahrenheit em Celsius\n");
    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &f_temp);

    c_temp = ((f_temp - 32) / 9) * 5;

    printf("Temperatura em Celsius: %.1f\n", c_temp);

    return 0;
}