#include <stdio.h>

int main() {

    int numero, i;

    printf ("Insira um número para calcularmos a tabuada... \n");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++) {

        printf("%d x %d = %d \n", numero, i, numero * i);

    }

    printf("\n\n");

    return 0;

}