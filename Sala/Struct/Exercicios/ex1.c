#include <stdio.h>
#include <string.h>
#define QNT 3

typedef struct {
    char nome[100];
    int idade;
    char curso[100];
    float nota;
} aluno_t;

int main() {
    aluno_t alunos[QNT];

    for (int i = 0; i < QNT; i++) {
        printf("\nAluno %d\nNome: ", i + 1);
        scanf("%100[^\n]", alunos[i].nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        fflush(stdin);

        printf("Curso: ");
        scanf("%100[^\n]", alunos[i].curso);
        fflush(stdin);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        fflush(stdin);
    }

    return 0;
}
