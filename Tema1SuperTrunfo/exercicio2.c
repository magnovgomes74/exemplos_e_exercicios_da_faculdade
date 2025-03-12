int main() {
    int regularNumber = 2147483647; 
    // Valor máximo de int

    long int bigNumber = 2147483647;
    // Valor máximo de int
 
    printf("\tNúmero regular (int): %d\n", regularNumber);
    printf("\tNúmero grande (long int): %ld\n", bigNumber);
 
    // Valor maior que o máximo de int, com acrescimo e sem estourar o limite de long int
    printf("\tNúmero grande atualizado (long int): %ld\n\n\n", ++bigNumber);
 
    return 0;
}