#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Testando o código switch case usando o jogo de Jokenpo;

    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("*** Jogo de Jokenpo ***\n\n");

    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("\nEscolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
        case 1:
        printf("\nJogador: Pedra\n");
        break;
        case 2:
        printf("\nJogador: Papel\n");
        break;
        case 3:
        printf("\nJogador: Tesoura\n");
        break;
    }

    switch (escolhaComputador)
    {
        case 1:
        printf("\nComputador: Pedra\n");
        break;
        case 2:
        printf("\nComputador: Papel\n");
        break;
        case 3:
        printf("\nComputador: Tesoura\n");
        break;
    }

    if (escolhaJogador == escolhaComputador) {
        printf("\nEmpate!\n");

    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
                (escolhaJogador == 2) && (escolhaComputador == 1) ||
                (escolhaJogador == 3) && (escolhaComputador == 2)) {

        printf("\nJogador venceu!\n");
        
    }   else {
        printf("\nComputador venceu!\n");
    }   

    printf("\n\n");

    return 0;

}