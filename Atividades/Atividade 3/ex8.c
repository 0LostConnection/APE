#include <stdio.h>

int main() {
    int startTime, endTime, matchLength; // startTime = hora de inicio, endTime = hora do fim

    printf("Digite a hora de início do jogo (0-23): ");
    scanf("%d", &startTime);
    printf("Digite a hora de fim do jogo (0-23): ");
    scanf("%d", &endTime);

    if (startTime == endTime) {
        matchLength = 24;
    } else {
        matchLength = (endTime - startTime + 24) % 24;
    }

    printf("A duração do jogo é de %d horas.\n", matchLength);

    return 0;
}