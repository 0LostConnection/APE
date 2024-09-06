#include <stdio.h>

void ola() {
    printf("Hello World!\n");
}

int quadrado(int a) {
    return a * a;
}

int main() {
    ola();
    ola();
    printf("%d", quadrado(-123));
    return 0;
}