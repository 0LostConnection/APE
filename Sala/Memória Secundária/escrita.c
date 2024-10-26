#include <stdio.h>
#include <stdlib.h>
#define true 1

int main() {
    FILE *arquivo;
    char texto[256];

    arquivo = fopen("novo.txt", "a");

    if (arquivo == NULL) {
        printf("Algo deu errado durante a leitura!");
        return 1;
    }

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    fprintf(arquivo, texto);

    fclose(arquivo);
    
    return 0;
}