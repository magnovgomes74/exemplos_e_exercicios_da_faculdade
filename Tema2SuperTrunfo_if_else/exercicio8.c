#include <stdio.h>

int main() {

    int idade = 16;
    int resultado;

    // Exemplo 1, usando operador ternário;
    idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");

    
    // Exemplo 2, usando if else;
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    printf("\n\n");

    return 0;


}