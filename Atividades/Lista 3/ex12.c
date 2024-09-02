#include <stdio.h>

int main() {
    int n = 1;

    while (n < 11) {
        printf("8 * %d = %d\n", n, n * 8);
        n++;
    }

    return 0;
}