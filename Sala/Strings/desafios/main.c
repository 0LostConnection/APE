#include <stdio.h>
#include <string.h>

void lerVetor(char vetor[], char *nome);

int main() {
    char s1[101], s2[101], s3[101];

    lerVetor(s1, "String 1: ");
    lerVetor(s2, "String 2: ");
    lerVetor(s3, "String 3: ");

    printf("\nTamanho da s1 = %d\nTamanho da s2 = %d\n\n", strlen(s1), strlen(s2));

    if (strcmp(s1, s2) == 0) {
        strcpy(s2, s3);
    } else {
        strcat(s3, s1);
        strcat(s3, s2);
    }

    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);
    printf("String 3: %s\n", s3);

    return 0;
}

void lerVetor(char vetor[], char *nome) {
    printf("%s", nome);
    fgets(vetor, 100, stdin);

    vetor[strcspn(vetor, "\n")] = '\0';
}