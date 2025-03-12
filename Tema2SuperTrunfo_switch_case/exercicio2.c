#include <stdio.h>

int main() {

// Exemplo na prática de um switch case
// O switch case é uma estrutura de controle que permite a seleção de um bloco de código a ser executado

    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção: \n");
    printf("1 - Verificar saldo\n");
    printf("2 - Fazer depósito\n");
    printf("3 - Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nSeu saldo é: %.2f\n", saldo);
        break;
    case 2:
        printf("\nInsira o banco que você deseja depositar: \n");
        printf("Insira a agencia que você deseja depositar: \n");
        printf("Insira a conta que você deseja depositar: \n");
    break;
    case 3:
        printf("\nInsira o valor que você deseja sacar: \n");
        printf("Insira a agencia que você deseja sacar: \n");
        printf("Insira a conta que você deseja sacar: \n");
    break;

    default:
    printf("\nOpção inválida\n");
    break;

    }

    printf("\n\n");


    return 0;

}