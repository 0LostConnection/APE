#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    int tamanho, iguais = 0;

    printf(": ");
    fgets(string, 100, stdin);

    string[strlen(string) - 1] = '\0';
    tamanho = strlen(string);

    for (int i = 0; i <= tamanho; i++) {
        if (string[i] == string[(tamanho - 1) - i])
            iguais++;
    }

    if (tamanho == iguais -1)
        printf("E palindroma!");
    else
        printf("Nao e palindroma!");

    return 0;
}