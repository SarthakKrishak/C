#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;

    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    //Modulus operator
    int rem = a % b;

    printf("%d\n", add);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%d\n", div);
    printf("%d\n", rem);

    int d = 3.8;
    printf("%d", d);

    return 0;
}