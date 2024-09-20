#include <stdio.h>

int main() {
    float notas[20], soma, media;
    int acimaMedia = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 20;

    for (int i = 0; i < 20; i++) {
        if (notas[i] > media) {
            acimaMedia++;
        }
    }

    printf("\nMédia da turma: %.2f\nAlunos acima da média: %d\n", media, acimaMedia);

    return 0;
}