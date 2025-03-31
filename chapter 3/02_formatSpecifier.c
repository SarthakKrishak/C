#include <stdio.h>

int main(){
    float a = 25.65767;
    float b = 0.00001;

    printf("%f\n", a + b);
    // Gives upto two decimal places
    printf("%.2f", a + b);
    return 0;
}