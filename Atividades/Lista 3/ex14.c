#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um número: ");
    scanf("%d", &n);

    i = n;

    while (i > 0) { // Enquanto i for maior que 0
        j = 0;      // j receberá 0

        // Enquanto j for menor que i, imprima * e acrescente j (quando j for igual maior que i o loop para)
        while (j < i) {
            printf("*");
            j++;
        }
        printf("\n"); // Linha

        i--; // Decremente i, quando i for menor que 0, o loop para
    }

    return 0;
}