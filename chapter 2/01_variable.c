#include <stdio.h>

int main(){
    //Declare the variable and then initialize it.
    int i = 10;
    int j = i;
    int a = 1, b = 2, c = 5, d = 6;
    // %d is called format specifier.
    // %d -> interger
    // %f -> float
    // %c -> character
    printf("The value of j is %d and the value of i is %d \n", j, i);

    printf("The value of a is %d and the value of b is %d\n", a, b);
    printf("The value of c is %d and the value of d is %d", c, d);

    return 0;
}