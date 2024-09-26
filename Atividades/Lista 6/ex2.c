#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    char stringLen = 0;

    printf(": ");
    fgets(string, 101, stdin);

    string[strlen(string) - 1] = '\0';

    while (string[stringLen] != '\0') {
        stringLen++;
    }

    printf("Tamanho da String (strlen): %d\nTamanho da String (loop): %d\n", strlen(string), stringLen);

    return 0;
}