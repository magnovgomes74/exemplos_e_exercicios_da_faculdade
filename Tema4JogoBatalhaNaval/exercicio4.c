#include <stdio.h>

int main() {
    // Vetores e Matriz com condicionais e loops.
    // Condicionais com matrizes.

    // Contagem condicional em uma matriz.

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int enveCount = 0, oddCount = 0; // Contadores de números pares e ímpares.

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matriz[i][j] % 2 == 0) {
                enveCount++; // Incrementa o contador de números pares.
            } else {
                oddCount++; // Incrementa o contador de números ímpares.
            }
        }
    }

    // impressão dos resultados da matriz.

    printf("Números pares: %d\n", enveCount);
    printf("Números ímpares: %d\n", oddCount);

    printf("\n\n");
    
    return 0;

}