#include <stdio.h>

int main() {
    int numeros[11], i, j, chave, novoNumero;

    for(i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Insertion Sort
    for(i = 1; i < 10; i++) {
        chave = numeros[i];
        j = i - 1;

        while(j >= 0 && numeros[j] > chave) {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = chave;
    }

    printf("\nDigite um novo número para inserir no vetor: ");
    scanf("%d", &novoNumero);

    i = 9;  // Última posição do vetor original de 10 números
    while(i >= 0 && numeros[i] > novoNumero) {
        numeros[i + 1] = numeros[i];
        i--;
    }
    numeros[i + 1] = novoNumero;  

    printf("\nVetor após a inserção do novo número:\n");
    for(i = 0; i < 11; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
