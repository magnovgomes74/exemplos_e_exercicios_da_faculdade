#include <stdio.h>

int main (){

    // Criar um padrão triangular de letras;

    int i, j;
    char letra = 'A';

    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ", letra);
            letra++;
        }

        printf("\n");
    }


    printf("\n\n");

    return 0;
}
