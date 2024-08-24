#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool get_confirmation(const char *prompt);

int main() {
    bool haveAppointment, inTown, haveMoney, isRaining, isClose;

    printf("Será que você irá ao passeio?\n\n");

    haveAppointment = get_confirmation("Você tem compromisso no dia? [s/N]: ");
    inTown = get_confirmation("Você vai estar na cidade? [s/N]: ");
    haveMoney = get_confirmation("Você tem dinheiro? [s/N]: ");

    if (haveMoney == true) {
        isRaining = get_confirmation("Estará chovendo? [s/N]: ");
    } else {
        isClose = get_confirmation("É perto? [s/N]: ");
    }

    // Lógica mais prática e eficiente
    if (haveAppointment == false && inTown == true && ((haveMoney == true && isRaining == false) || (haveMoney == false && isClose == true))) {
        printf("\nVocê vai!\n");
    } else {
        printf("\nVocê não vai!\n");
    }

    return 0;
}

/*
   Função pra ajudar a coletar a resposta do usuário
   Fiz ela com meus estudos pessoais
*/
bool get_confirmation(const char *prompt) {
    char input[100];

    while (true) {
        printf("%s", prompt);

        if (fgets(input, sizeof(input), stdin) == NULL) { // Ler inputr do usuário no stdin e armazena-o dentro do "input"
            printf("Erro ao ler input!");
            exit(1);
        } else {
            input[strcspn(input, "\n")] = 0; // Retorna todos os caracteres que não sejam o caractere de nova linha
        }

        // Verifica se o primeiro caractere é o esperado e retorna um booleano dependendo da resposta
        if (input[0] == 's' || input[0] == 'S') {
            return true;
        } else if (input[0] == 'n' || input[0] == 'N') {
            return false;
        } else {
            printf("Resposta inválida! [s/N]\n");
        }
    }
}