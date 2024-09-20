#include <stdio.h>
#include "teste.h"

int main() {
    int a = 5, b = 10, c;
    c = soma(a, b);

    printf("%d + %d = %d\n", a, b, c);

    return 0;
}