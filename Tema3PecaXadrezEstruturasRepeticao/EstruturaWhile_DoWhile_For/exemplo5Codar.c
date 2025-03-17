#include <stdio.h>

int main() {

    int numero;


    do {

        printf("Insira um número par para sair do programa... \n");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            printf("%d é um número par!\n", numero);
        }
        else {
            printf("%d é um número ímpar!\n", numero);
        }

    }

    while (numero % 2 != 0);

    printf("Você inseriu um número par! saindo do programa...");

    printf("\n\n");


    return 0;

}