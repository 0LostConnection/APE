#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int number, contador = 0, max;

    // Abre o arquivo binário para leitura
    arquivo = fopen("numeros.dat", "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Lê o primeiro número para inicializar o maior
    if (fread(&number, sizeof(int), 1, arquivo) == 1) {
        max = number;
        contador++;
    } else {
        printf("O arquivo esta vazio.\n");
        fclose(arquivo);
        return 0;
    }

    // Continua lendo e processando o arquivo
    while (fread(&number, sizeof(int), 1, arquivo) == 1) {
        contador++;  // Incrementa o contador para cada número lido
        if (number > max) {
            max = number;  // Atualiza o maior número, se necessário
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Exibe os resultados
    printf("Quantidade de numeros: %d\n", contador);
    printf("Maior numero: %d\n", max);

    return 0;
}