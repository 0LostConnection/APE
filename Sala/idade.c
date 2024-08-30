#include <stdio.h>

int main() {
    int idade;

    do {
        printf("Qual sua idade? ");
        scanf("%d", &idade);
    } while (idade < 0 || idade > 130);
    
    printf("Sua idade é %d\n", idade);

    return 0;
}