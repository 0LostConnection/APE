#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char temp[256];
    int linha = 0;
    arquivo = fopen("paciente.txt", "r");

    if (arquivo == NULL) {
        printf("Erro na leitura do arquivo!");
        return 1;
    }

    char *formatacao[] = {"Nome: ", "Idade: ", "Leito: "};

    while (fgets(temp, sizeof(temp), arquivo)) {
        printf("%s%s", formatacao[linha], temp);
        if (linha == 2) {
            linha = 0;
        } else {
            linha++;
        }
    }

    fclose(arquivo);
    return 0;
}