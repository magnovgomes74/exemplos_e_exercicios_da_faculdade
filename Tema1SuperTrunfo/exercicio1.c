#include <stdio.h>
int main() {

    int signedNumber = 3000000000;
    // Este valor excede o limite de um int normal

    unsigned int unsignedNumber = 3000000000;
    // Agora o valor é interpretado como um número sem sinal,
    // ou seja, não pode ser negativo;
 
    printf("\tNúmero com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n\n\n", unsignedNumber);
 
    return 0;
}