#include <stdio.h>

int main() {
    float grade1, grade2, avarage;

    printf("Digite a nota da 1ª avaliação: ");
    scanf("%f", &grade1);

    printf("Digite a nota da 2ª avaliação: ");
    scanf("%f", &grade2);

    avarage = (grade1 + grade2) / 2.0;

    printf("Média: %.2f\n", avarage);

    if (avarage >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}