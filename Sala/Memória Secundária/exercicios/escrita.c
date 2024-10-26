#include <stdio.h>
#include <stdlib.h>

char lerEscreverDados(char *mensagem, FILE *arquivo) {
    char temp[256];

    printf("%s", mensagem);
    fgets(temp, sizeof(temp), stdin);

    fprintf(arquivo, temp);
}

int main() {
    FILE *arquivo;

    arquivo = fopen("paciente.txt", "a");

    if (arquivo == NULL) {
        printf("Erro na leitura do arquivo!");
        return 1;
    }

    lerEscreverDados("Digite o nome do paciente: ", arquivo);
    lerEscreverDados("Digite a idade do paciente: ", arquivo);
    lerEscreverDados("Digite o leito do paciente: ", arquivo);

    fclose(arquivo);
    return 0;
}