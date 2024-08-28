#include <stdio.h>

int main() {
    /*
    currentStock   =  quantidade atual em estoque
    maximumStock   =  quantidade máxima em estoque
    minimumStock   =  quantidade mínima em estoque
    avarageStock   =  quantidade média
    */
    int currentStock, maximumStock, minimumStock, avarageStock;

    printf("Quantidade atual em estoque: ");
    scanf("%d", &currentStock);

    printf("Quantidade máxima em estoque: ");
    scanf("%d", &maximumStock);

    printf("Quantidade mínima em estoque: ");
    scanf("%d", &minimumStock);

    avarageStock = (maximumStock + minimumStock) / 2;

    if (currentStock >= avarageStock) {
        printf("\nQuantidade média: %d\nNão efetuar compra!\n", avarageStock);
    } else {
        printf("\nQuantidade média: %d\nEfetuar compra!\n", avarageStock);
    }
}