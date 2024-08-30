#include <stdio.h>

int main() {
    float n1, n2, n3, final_avarage;

    printf("Simular Média Final\n");
    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("N3: ");
    scanf("%f", &n3);

    final_avarage = (2 * n1 + 3 * n2 + 5 * n3) / (float)10;

    printf("Média final: %.2f\n", final_avarage);

    return 0;
}