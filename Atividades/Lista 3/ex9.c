#include <stdio.h>

int main() {
    int i = 101;
    int count = 0;

    while (count < 10) {
        printf("%d\n", i);
        i++;
        count++;
    }

    return 0;
}