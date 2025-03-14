#include <stdio.h>

int main() {

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 100;

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: ");
    scanf("%f", &umidade);

    printf("Entre com o estoque: ");
    scanf("%u", &estoque);
    

    if (temperatura > 30) {
        printf("\nTemperatura está alta.\n");
    } else {
        printf("\nTemperatura está dentro dos parâmetros.\n");
    }

    if (umidade > 50) {
        printf("\nUmidade está elevada.\n");
    } else {
        printf("\nUmidade está dentro dos parâmetros.\n");
    }

    if (estoque < estoqueMinimo) {
        printf("\nEstoque abaixo do mínimo.\n");
    } else {
        printf("\nEstoque dentro dos parâmetros.\n");
    }
    
    printf("\n\n");
    
    return 0;

}