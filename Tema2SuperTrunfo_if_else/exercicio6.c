#include <stdio.h>

int main() {

    // Programa com condição aninhada e encadeada

    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("O número é positivo e par\n");
        } else {
            printf("O número é positivo e ímpar\n");
        }
    } else if (numero == 0) {
        printf("O número é zero\n");
    }
    
    else { // Agora verifica os números negativos
        if (numero % 2 == 0) {
            printf("O número é negativo e par\n");
        } else {
            printf("O número é negativo e ímpar\n");
        }
    }

    printf("\n\n");

    return 0;
    
}