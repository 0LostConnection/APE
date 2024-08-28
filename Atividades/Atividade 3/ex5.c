#include <stdio.h>

int main() {
    int birthYear, age;

    printf("Em que ano você nasceu? ");
    scanf("%d", &birthYear);

    age = 2024 - birthYear;

    if(age >= 16) {
        printf("\nIdade: %d\nVocê pode votar esse ano!\n", age);
    } else
    {
        printf("\nIdade: %d\nVocê não poderá votar esse ano!\n", age);
    }
    

}