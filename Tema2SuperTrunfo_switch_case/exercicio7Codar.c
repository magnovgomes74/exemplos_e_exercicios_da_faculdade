#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gera um número aleatório;
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número aleatório entre 1 e 100;


    // Inicio do jogo;
    printf("****Bem-vindo ao jog Maior, Menor ou Igual****\n");
    printf("Você deve escolher um número e o tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Escolha um número: ");
    scanf("%d", &numeroJogador); 

    // Exibir o número do computador;
    // printf("O número do computador é: %d\n", numeroComputador);
    printf("O número do computador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;

    case 'I':
    case 'i':
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    }

    printf("\nO número do computador é: %d e do jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1) {
        printf("Parabéns, você venceu!\n");
    } else {
        printf("Que pena, você perdeu!\n");
    }

    printf("\n\n");

    return 0;

}