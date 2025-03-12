#include <stdio.h>

int main() {

    // Estrutura de decisão encadeada;

    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //F < 60

    if (nota >= 90) {
        printf("Conceito A\n");
    }
    else if (nota >= 80) {
        printf("Conceito B\n");
    }
    else if (nota >= 70) {
        printf("Conceito C\n");
    }
    else if (nota >= 60) {
        printf("Conceito D\n");
    }
    else {
        printf("Conceito F\n");
    }
    
    printf("\n\n");
    
    return 0;

}
    
