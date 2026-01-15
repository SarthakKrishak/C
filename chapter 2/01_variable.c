#include <stdio.h>

int main(){
    //Declare the variable and then initialize it with the value.
    int i = 10;
    int j = i;
    // We can intialize multiple variables in a single line as well
    int a = 1, b = 2, c = 5, d = 6;
    // %d is called format specifier.
    // %d -> interger
    // %f -> float
    // %c -> character
    printf("The value of j is %d and the value of i is %d\n", j, i);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    printf("The value of c is %d and the value of d is %d\n", c, d);

    int q, w, e, r;
    q = w = e = r = 10;
    printf("The final value of q is %d", q);
    return 0;
}