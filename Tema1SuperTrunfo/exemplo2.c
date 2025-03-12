#include <stdio.h>

int main() {

    int x = 5;
    int y = 5.0;
    char c = 'a'; //conversão implícita de a para 97 por conta do ASCII a = 97;


    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d: \n\n\n", c, c);

    return 0;

}