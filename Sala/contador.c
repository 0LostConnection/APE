#include <stdio.h>

int main() {
    int i = 0;

    while (i < 10) {
        printf("while: %d\n", i);
        i++;
    }

    
    do {
        printf("do: %d\n", i);
        i++;
    } while (i < 10);

    return 0;
}