#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
#include <stdio.h>
#include <string.h>

int main() {
    char pswd[101];
    int numbers = 0, uppers = 0, lowers = 0, tamanho;

    printf("Digite uma senha: ");
    fgets(pswd, 100, stdin);

    tamanho = strlen(pswd);

    pswd[tamanho - 1] = '\0';

    for (int i = 0; i < tamanho; i++) {
        if (isdigit(pswd[i]))
            numbers++;

        if (isupper(pswd[i]))
            uppers++;

        if (islower(pswd[i]))
            lowers++;
    }

    if (tamanho < 8 || numbers <= 0 || uppers <= 0 || lowers <= 0) {
        printf("A sua senha precisa conter: \n");

        if (tamanho < 8)
            printf("Pelo menos 8 ou mais caracteres!\n");

        if (numbers <= 0)
            printf("Pelo menos 1 numero!\n");

        if (uppers <= 0)
            printf("Pelo menos 1 letra maiuscula!\n");

        if (lowers <= 0)
            printf("Pelo menos 1 letra minuscula!\n");
    } else {
        printf("\nSenha valida, obrigado! :)\n");
    }
    printf("\nDEBUG:\nString: %s\nTamanho: %d\nNumeros: %d\nMaiuscula: %d\nMinuscula: %d\n", pswd, tamanho, numbers, uppers, lowers);

    return 0;
}