#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[] = "Você escreveu: ";
    char s2[101];
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    printf("Digite um texto: ");
    fgets(s2, 100, stdin);

    s2[strlen(s2) - 1] = '\0';

    strcat(s1, s2); // s1 = s1 + s2

    printf("%s", s1);

    return 0;
}