#include <stdio.h>
#include <stdlib.h>
#include "pediatria.h"

int main() {
    // Criando o primeiro paciente
    paciente_t *paciente1 = primeiro_paciente("Ana", 8, 25.0, 1.20, 'F');
    if (paciente1 == NULL) {
        return 1;
    }

    // Adicionando mais pacientes
    novo_paciente(paciente1, "Lucas", 10, 35.0, 1.35, 'M');
    novo_paciente(paciente1, "Bianca", 12, 45.0, 1.50, 'F');
    
    // Iterando pela lista de pacientes e calculando IMC
    paciente_t *atual = paciente1;
    while (atual != NULL) {
        IMCInfantil faixa = calcula_imc(atual);

        printf("Paciente: %s\n", atual->nome);
        printf("Idade: %d\n", atual->idade);
        printf("Peso: %.2f kg\n", atual->peso);
        printf("Altura: %.2f m\n", atual->altura);

        // Exibindo o resultado da faixa de IMC
        switch (faixa) {
            case ABAIXO:
                printf("IMC: Abaixo do Normal\n");
                break;
            case NORMAL:
                printf("IMC: Normal\n");
                break;
            case SOBREPESO:
                printf("IMC: Sobrepeso\n");
                break;
            case OBESIDADE:
                printf("IMC: Obesidade\n");
                break;
            default:
                printf("IMC: Faixa desconhecida\n");
                break;
        }
        printf("\n");

        atual = atual->prox;
    }

    // Liberar memória dos pacientes (exemplo básico, não inclui todos os pacientes)
    free(paciente1);

    return 0;
}
