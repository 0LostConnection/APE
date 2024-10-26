#include <stdio.h>
#include <stdlib.h>
#define true 1

int main() {
    FILE *arquivo;
    char texto[256];

    arquivo = fopen("texto.txt", "r");

    if (arquivo == NULL) {
        printf("Algo deu errado durante a leitura!");
        return 1;
    }

    while (fgets(texto, sizeof(texto), arquivo)) {
        printf("%s", texto);
    }

    fclose(arquivo);

    return 0;
}