#include <stdio.h>

int main() {
    char name[50], genre;
    float heigth;
    float idealWeight;

    printf("Calcular o Peso Ideal\n");

    printf("\nInsira o seu primeiro nome (ex.: Geovane)\n");
    scanf("%49s", name);

    printf("\nInsira o seu sexo (M/F)\n");
    scanf(" %c", &genre);

    printf("\nInsira a sua altura em metros (ex.: 1.80)\n");
    scanf("%f", &heigth);

    // Poderia usar switch mas eu teria muita repetição de código se eu quisesse contar os caracteres em maiúsculo e minúsculo
    if (genre == 'M' || genre == 'm') {
        idealWeight = (72.7 * heigth) - 58;

    } else if (genre == 'F' || genre == 'f') {
        idealWeight = (62.1 * heigth) - 44.7;

    } else {
        printf("\nSexo inválido!\n");
        return 1;
    }

    printf("\nNome: %s\nSexo: %c\nAltura: %.2f m\nPeso Ideal: %0.2f\n", name, genre, heigth, idealWeight);

    return 0;
}