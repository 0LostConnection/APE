#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float temp[365], soma = 0, mediaAnual, menor, maior;
    int menorQueMedia = 0, maxTemp = 40, minTemp = 10;

    srand(time(NULL));

    for (int i = 0; i < 365; i++) {
        temp[i] = (rand() % (maxTemp - minTemp + 1) + minTemp + (rand() % 100) / 100);
        printf("Dia %d: %.1fºC\n", i + 1, temp[i]);

        soma += temp[i];

        if (i == 0) {
            maior = temp[i];
            menor = temp[i];
        }

        if (temp[i] < menor) {
            menor = temp[i];
        }

        if (temp[i] > maior) {
            maior = temp[i];
        }
    }

    mediaAnual = soma / 365;

    for (int i = 0; i < 365; i++) {
        if (temp[i] < mediaAnual) {
            menorQueMedia++;
        }
    }

    printf("\nMaior temperatura do ano: %.1fºC\nMenor temperatura do ano: %.1fºC\n", maior, menor);
    printf("Temperatura média anual: %.1f°C\nN° de dias em temperatura foi inferior a média anual: %d\n", mediaAnual, menorQueMedia);

    return 0;
}