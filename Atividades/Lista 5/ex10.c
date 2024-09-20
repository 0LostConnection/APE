#include <stdio.h>

int main() {
    int numeros[20], B[20], n, encontrado = 0, novoTamanho = 0;

    for(int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite um número para verificar se existe no vetor: ");
    scanf("%d", &n);

    for(int i = 0; i < 20; i++) {
        if(numeros[i] == n) {
            encontrado = 1;
        } else {
            B[novoTamanho] = numeros[i];
            novoTamanho++;
        }
    }

    if(encontrado) {
        printf("\nO número %d foi encontrado e removido.\nNovo vetor:\n", n);
        for(int i = 0; i < novoTamanho; i++) {
            printf("%d ", B[i]);
        }
        printf("\n");
    } else {
        printf("\nO número %d não foi encontrado no vetor.\n", n);
    }

    return 0;
}
