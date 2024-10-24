#include <stdio.h>
#include <string.h>

// typedef int inteiro;

// _t indica que é um tipo novo, é uma convensão. Vai funcionar sem.
typedef struct {
    char nome[100];
    int idade;
    int leito;
} paciente_t;

int main() {
    paciente_t p1, p2;

    strcpy(p1.nome, "Geovane");
    p1.idade = 18;
    p1.leito = 0;

    strcpy(p2.nome, "Pedro");
    p2.idade = 17;
    p2.leito = 1;

    printf("Paciente 1:\nNome: %s\nIdade: %d\nLeito: %d\n\n", p1.nome, p1.idade, p1.leito);
    printf("Paciente 2:\nNome: %s\nIdade: %d\nLeito: %d\n", p2.nome, p2.idade, p2.leito);

    return 0;
}