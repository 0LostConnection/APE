#include <stdio.h>

int main() {
    int total_voters, white_votes, null_votes, valid_votes;
    float white_percentual, null_percentual, valid_percentual;

    printf("Digite o número total de eleitores do município: ");
    scanf("%d", &total_voters);

    printf("Digite o número de votos brancos: ");
    scanf("%d", &white_votes);

    printf("Digite o número de votos nulos: ");
    scanf("%d", &null_votes);

    printf("Digite o número de votos válidos: ");
    scanf("%d", &valid_votes);

    white_percentual = (white_votes / (float)total_voters) * 100;
    null_percentual = (null_votes / (float)total_voters) * 100;
    valid_percentual = (valid_votes / (float)total_voters) * 100;

    printf("\nPercentual de votos Brancos: %.2f%%\n", white_percentual);
    printf("Percentual de votos Nulos: %.2f%%\n", null_percentual);
    printf("Percentual de votos Válidos: %.2f%%\n", valid_percentual);

    return 0;
}