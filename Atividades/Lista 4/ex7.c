#include <stdio.h>

int parImpar(int n);

int main() {
    int n;

    printf("Par ou Ímpar?\n: ");
    scanf("%d", &n);

    if (parImpar(n) == 1)
        printf("\nPar!\n");
    else
        printf("\nÍmpar!\n");

    return 0;
}

int parImpar(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}