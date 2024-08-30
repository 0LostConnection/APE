#include <stdio.h>

int main() {
    int years, months, days, result;

    printf("\nDigite sua idade em anos: ");
    scanf("%d", &years);
    printf("\nDigite sua idade em meses: ");
    scanf("%d", &months);
    printf("\nDigite sua idade em dias: ");
    scanf("%d", &days);

    result = years * 365 + months * 30 + days;

    printf("\nA sua idade é de %d dias.\n", result) ;

    return 0;
}