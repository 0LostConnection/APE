#include <stdio.h>

int main() {
    // Solução 1
    int a, b;
    a = 10;
    b = -8;

    printf("SOLUÇÃO 1 ANTES:\na = %d\nb = %d\n\n", a, b);

    int temp;
    temp = a; // "temp" recebe "a" = 10
    a = b;    // "a" recebe "b" = -8
    b = temp; // "b" recebe "temp" = 10

    printf("SOLUÇÃO 1 DEPOIS:\na = %d\nb = %d\n\n", a, b);

    // Solução 2
    int x, y;
    x = 10;
    y = -8;

    printf("SOLUÇÃO 2 ANTES:\na = %d\nb: %d\n\n", x, y);

    x = x + y; // x = 10 - (-8) = 2
    y = x - y; // y = 2 - (-8) = 10
    x = x - y; // x = 2 - 10 = -8

    printf("SOLUÇÃO 2 DEPOIS:\na = %d\nb= %d\n", x, y);
}