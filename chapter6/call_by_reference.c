#include <stdio.h>

// function prototype
int sum(int*, int*);

int main()
{
    int a = 5;
    int b = 2;
    printf("the sum is %d\n", sum(&a, &b));
    printf("the value of a is %d", a);
    return 0;
}

int sum(int *x, int *y)
{
    *x = 6;
    return *x + *y;
}