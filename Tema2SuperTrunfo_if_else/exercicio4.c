#include <stdio.h>

    // Estrutura de decisão aninhada;

    /*
    programa verifica se uma pessoa está qualifada para um desconto
    especial comb base na idade e na renda mensal. A pessoa deve ter
    mais de 60 anos ou menos de 18 anos e ter uma renda mensao abaixo de 2000
    */

int main() {

    int idade;
    float renda;

    printf("Insira a sua idade: ");
    scanf("%d", &idade);
    printf("Insira a sua renda mensal: ");
    scanf("%f", &renda);
    

    if (idade <= 18 || idade >= 60) {

        if (renda < 2000) {
            printf("\nVocê está qualificado para receber o desconto especial!\n");
        } else {
            printf("\nVocê não está qualificado para receber o desconto devido a renda!\n");
        }

    } else {
        printf("\nVocê não antende aos critérios de idade\n");
    }

    printf("\n\n");

    return 0;

}