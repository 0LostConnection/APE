#include <stdio.h>

int main() {
    int start = 15;
    int end = 100;
    int sum = 0;
    int count = 0;
    int i = start;
    float average;

    while (i <= end) {
        sum += i;
        count++;
        i++;
        // printf("\nSum: %d\nCount: %d\nI: %d\n", sum, count, i);
    }

    average = (float)sum / (float)count;
    printf("Média aritmética [15-100]: %.1f\n", start, end, average);

    return 0;
}
