#include <stdio.h>
#define true 1
#define false 0

float calcularNotas(float n1, float n2, float n3, char letra);

float pegarNota(const char *nome);

char pegarOpcao();

int main() {
    float n1 = pegarNota("N1");
    float n2 = pegarNota("N2");
    float n3 = pegarNota("N3");
    char letra = pegarOpcao();
    float media = calcularNotas(n1, n2, n3, letra);

    printf("%.1f", media);

    return 0;
}

float calcularNotas(float n1, float n2, float n3, char letra) {
    switch (letra) {
    case 'A':
        return (n1 + n2 + n3) / 3;
        break;

    case 'P':
        return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        break;

    case 'H':
        return 3 / ((1 / n1) + (1 / n2) + (1 / n3));
        break;
    }
}

float pegarNota(const char *nome) {
    float n;

    do {
        printf("Insira a %s: ", nome);
        scanf("%f", &n);
    } while (n < 0);

    return n;
}

char pegarOpcao() {
    char letra;

    while (true) {
        printf("\nEscolha uma opção:\nA - Média Aritmética\nP - Média Ponderada\nH - Média Harmônica\n: ");
        scanf(" %c", &letra);

        switch (letra) {
        case 'A':
            printf("\nMédia Aritmética: ");
            return 'A';
            break;

        case 'P':
            printf("\nMédia Ponderada: ");
            return 'P';
            break;

        case 'H':
            printf("\nMédia Harmônica: ");
            return 'H';
            break;

        default:
            printf("Opção Inválida!\n");
            break;
        }
    }
}