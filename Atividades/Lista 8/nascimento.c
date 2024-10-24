#include <stdio.h>
#include <time.h>
#include "nascimento.h"

/* 
PASSOS:
Converter a data de nascimento e a data atual em segundos desde 1º de janeiro de 1970;
Calcular a diferença entre essas duas datas em segundos;
Converter a diferença em dias, dividindo o valor de segundos pelo número de segundos em um dia.
*/

int dias_de_vida(data_t nasc) {
    time_t agora = time(NULL);
    struct tm *data_atual = localtime(&agora);

    struct tm data_nascimento = {0};
    data_nascimento.tm_year = nasc.ano - 1900; 
    data_nascimento.tm_mon = nasc.mes - 1;
    data_nascimento.tm_mday = nasc.dia;

    time_t nascimento_time = mktime(&data_nascimento);

    double segundos_de_vida = difftime(agora, nascimento_time);

    int dias_de_vida = segundos_de_vida / (60 * 60 * 24);

    return dias_de_vida;
}
