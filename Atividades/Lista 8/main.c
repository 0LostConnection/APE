#include <stdio.h>
#include "nascimento.h"

int main() {
    data_t nasc;
    nasc.ano = 1969;
    nasc.dia = 6;
    nasc.mes = 9;

    printf("Antonelson tem %d dias de vida.", dias_de_vida(nasc));

    return 0;
}