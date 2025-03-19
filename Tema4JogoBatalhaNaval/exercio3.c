#include <stdio.h>

int main() {
    // Vetores e Matriz com condicionais e loops.
    // Condicionais com matrizes.

    // Modificação condicional da matriz.

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matriz[i][j] > 5) {
                matriz[i][j] = -matriz[i][j];
                // Se o elemento for maior que 5, torna-se negativo.

            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    
    return 0;

}