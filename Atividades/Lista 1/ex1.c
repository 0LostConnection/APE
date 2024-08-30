#include <stdio.h>

int main() {
    int value;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &value);
    printf("\nAntecessor: %d\n", --value);

    return 0;
}