#include <stdio.h>


int main() {

    int idade, dependentes;
    float renda;

    // A primeira condição idade do usuário está entre 18 e 65 anos.
    // A segunda condição é que a renda do usuário é menor que 3000.
    // A terceira condição verifica se o número de dependentes é maior que 2.

    printf("Insira a sua idade: ");
    scanf("%d", &idade);
    printf("Insira a sua renda mensal: ");
    scanf("%f", &renda);
    printf("Insira o número de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65) {
        if (renda < 3000) {
            if (dependentes > 2) {
                printf("\nVocê está qualificado para receber o desconto especial!\n");
            }
            else {
                printf("\nVocê não está qualificado para receber o desconto devido ao número de dependentes!\n");
            }
        }
        else {
            printf("\nVocê não está qualificado para receber o desconto devido a renda!\n");
        }
    }
    else {
        printf("\nVocê não atende aos critérios de idade\n");
    }

    printf("\n\n");
    
    return 0;
}
    
