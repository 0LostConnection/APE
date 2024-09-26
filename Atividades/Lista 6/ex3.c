#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    int tamanho;

    printf(": ");
    fgets(string, 100, stdin);

    tamanho = strlen(string);
    string[tamanho - 1] = '\0';

    for (int i = 0; i < tamanho; i++) {
        printf("%c", string[(tamanho - 1) - i]);
    }

    printf("\n");

    return 0;
}