#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, total = 0, nulo = 0, branco = 0, voto;
    float percentualNulo, percentualBranco;

    do {
        printf("\n\nUrna\nAs opções são:\n1. Jair Rodrigues\n2. Carlos Luz\n3. Neves Rocha\n4. Nulo\n5. Branco\n\nEntre com o seu voto: ");
        scanf("%d", &voto);

        switch (voto) {
        case 1:
            candidato1++;
            total++;
            break;

        case 2:
            candidato2++;
            total++;
            break;

        case 3:
            candidato3++;
            total++;
            break;

        case 4:
            nulo++;
            total++;
            break;

        case 5:
            branco++;
            total++;
            break;

        case 6:
            percentualNulo = (nulo / (float)total) * 100;
            percentualBranco = (branco / (float)total) * 100;

            printf("\nResultados:\n\n");
            printf("Votos por candidato:\nJair Rodrigues: %d\nCarlos Luz: %d\nNeves Rocha: %d\n\n", candidato1, candidato2, candidato3);
            printf("Percentual de votos Nulos: %.2f%%\n", percentualNulo);
            printf("Percentual de votos brancos: %.2f%%\n\n", percentualBranco);

            if (candidato1 > candidato2 && candidato1 > candidato3) {
                printf("Candidato vencedor: Jair Rodrigues\n");
            } else if (candidato2 > candidato1 && candidato2 > candidato3) {
                printf("Candidato vencedor: Carlos Luz\n");
            } else if (candidato3 > candidato1 && candidato3 > candidato2) {
                printf("Candidato vencedor: Neves Rocha\n");
            } else {
                printf("Empate!\n");
            }

            break;

        default:
            printf("Número inválido");
            break;
        }
    } while (voto != 6);

    return 0;
}