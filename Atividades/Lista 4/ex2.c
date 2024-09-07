#include <math.h>
#include <stdio.h>

float distEuclidiana(int x1, int y1, int x2, int y2);

int main() {
    int x1, y1, x2, y2;

    printf("Diga o valor de x1: ");
    scanf("%d", &x1);

    printf("Diga o valor de y1: ");
    scanf("%d", &y1);

    printf("Diga o valor de x2: ");
    scanf("%d", &x2);

    printf("Diga o valor de y2: ");
    scanf("%d", &y2);

    printf("\nDistância euclidiana entre (%d, %d) e (%d, %d):\n%.1f\n", x1, y1, x2, y2, distEuclidiana(x1, y1, x2, y2));

    return 0;
}

float distEuclidiana(int x1, int y1, int x2, int y2) {
    float resultado = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return resultado;
}