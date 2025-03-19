#include <stdio.h>

#define linhas 5 // Definindo o tamanho da linha da matriz
#define colunas 5 // Definindo o tamanho da coluna da matriz

int main() {

    int matriz [linhas][colunas]; // Declarando a matriz

    int soma = 0; // Variável para incrementar o valor da matriz

    for (int i = 0; i < linhas; i++) {
        for( int j = 0; j < colunas; j++){

            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
         printf("\n");   
    }

    printf("\n\n");

    return 0;

}