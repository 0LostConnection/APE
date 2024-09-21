#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Teste";
    char s2[] = {'T', 'e', 's', 't', 'e', '\0'};

    if (s1 == s2) {
        printf("Isso não deveria acontecer\n");
    }

    if (strcmp(s1, s2) == 0) {
        printf("Iguais!\n");
    }

    return 0;
}