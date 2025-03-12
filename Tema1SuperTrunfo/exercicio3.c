#include <stdio.h>
 
int main() {

    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("\tNúmero preciso (double): %.15f\n", preciseNumber);
    printf("\tNúmero muito preciso (long double): %.21Lf\n\n\n", veryPreciseNumber);
 
    return 0;
}