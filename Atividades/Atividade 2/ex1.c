#include <stdio.h>

int main() {
    int number;
    
    printf("Digite um número: ");
    scanf("%d", &number);

    if (number > 10) {
        printf("É MAIOR QUE 10!\n");
    } else {
        printf("NÃO É MAIOR QUE 10!\n");
    }
}