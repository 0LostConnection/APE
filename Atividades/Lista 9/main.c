#include <stdio.h>
#include "paciente.h"

int main() {
    paciente_t paciente1;

    alocacao_paciente(&paciente1, "Geovane Saraiva da Silva", 18);

    printf("Paciente: %s\nIdade: %d\nLeito: %d\n", paciente1.nome, paciente1.idade, paciente1.leito);

    return 0;
}