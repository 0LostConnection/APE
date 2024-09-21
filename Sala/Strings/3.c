#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Teste";
    char s2[101];

    // s2 = s1; // Não pode
    strcpy(s2, s1);

    printf("%s = %s\n", s1, s2);

    s2[4] = 's';

    printf("%s = %s\n", s1, s2);

    return 0;
}