#include <stdio.h>

int main() {

    //Operador ternário para teste;

    for (int i = 0;
        i < 100;
        i += (i % 2 == 0) ? 1 : 2) 
    { 
        printf("%d ", i);
    } 
    
    printf("\n\n");
    
    return 0;

}