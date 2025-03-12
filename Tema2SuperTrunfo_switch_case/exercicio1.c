#include <stdio.h>

int main() {

    int variavel;

    printf("Insira um valor: ");
    scanf("%d", &variavel);


    switch (variavel) {
        case 1:
            // Código a ser executado caso variavel == valor1
            printf("Código a ser executado se variável == 1\n");
        break; // O break é necessário para sair do switch case e parar a execução das outras opções
        case 2:
            // Código a ser executado caso variavel == valor2
            printf("Código a ser executado se variável == 2\n");
        break;
        case 3:
            // Código a ser executado caso variavel == valor3
            printf("Código a ser executado se variável == 3\n");
        break;
        default:
            // Código a ser executado se nenhum dos casos acima for verdadeiro
            printf("Código a ser executado se variável não for 1, 2 ou 3\n");
        break;
    }

    printf("\n\n");

    return 0;

}