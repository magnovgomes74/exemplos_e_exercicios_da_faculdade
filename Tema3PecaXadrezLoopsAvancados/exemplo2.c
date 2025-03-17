#include <stdio.h>

int main() {

    //&& ou || - i e j iniciados ao mesmo tempo - i++ ou j--;

    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {

        printf("i = %d, j = %d\n", i, j);
    
    } 
    // controle simultâneo;
    printf("\n\n");
    
    return 0;

}