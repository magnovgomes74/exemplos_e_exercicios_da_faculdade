#include <stdio.h>


int main() {
    /* Declarar variáveis Produto, u i estoque, double valor unitário, double
    valor total, e u i quantidade minima. */

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorUnitarioA = 10.50;
    float valorUnitarioB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //Exibir as informações dos produtos
    
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA,estoqueA, valorUnitarioA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n\n", produtoB,estoqueB, valorUnitarioB);

    //Comparações com o valor mínimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo? %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo? %d\n\n\n", produtoB, resultadoB);

    //Comparações entre os valores totais dos produtos

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n\n\n", estoqueA * valorUnitarioA, 
        estoqueB * valorUnitarioB, (estoqueA * valorUnitarioA) > (estoqueB * valorUnitarioB));


    return 0;

}