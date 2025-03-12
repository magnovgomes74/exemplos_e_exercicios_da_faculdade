#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1 - Iniciar o jogo\n");
    printf("2 - Ver regras\n");
    printf("3 - Sair\n");
    printf("Entre com a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Insira um número de 0 a 9: ");
        scanf("%d", &palpite);
        
        if (numeroSecreto == palpite) {
            printf("Parabéns, você acertou!\n");
            printf("O número secreto era: %d\n", numeroSecreto);
        } else {
            printf("Que pena, você errou!\n");
            printf("O número secreto era: %d\n", numeroSecreto);
        }

        break;
    case 2:
        printf("Regras do jogo:\n");
        printf("Insira a opção relacionada as regras do jogo\n");
        scanf("%d", &regras);

        switch (regras)
        {
        case 1:
            printf("1 - Cada jogador escolhe um número\n");
            break;
        case 2:
            printf("2 - O jogador que acertar o número aleatório vence!\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    case 3:
        printf("Saindo do jogo...\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

    printf("\n\n");

    return 0;

}