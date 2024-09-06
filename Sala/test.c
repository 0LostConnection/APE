/* #include <stdio.h>

char cp437_map(int code);

int main() {
    int i;

    printf("CP437 Table:\n");
    printf("  Dec  Hex  Char\n");
    printf("----- ----- -----\n");

    for (i = 0; i <= 255; i++) {
        // Mapeamento de caracteres CP437
        char c = cp437_map(i);

        printf("%5d %5x %5c\n", i, i, c);
    }

    return 0;
}

// Função para mapear caracteres CP437
char cp437_map(int code) {
    static char cp437_table[] = {
        // Tabela de mapeamento CP437
        // ...
    };

    return cp437_table[code];
} */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;

    if (i == 0) {
        printf("Sucesso!");
        exit(0);
    }

    if (i == 1) {
        printf("Erro!");
        exit(1);
    }

    return 0;
}