#include <stdio.h>

int function()
{
    int a = 2;
    printf("Integer : %d", a);
    return 0;
}

int main()
{
    printf("Size of int : %zu bytes\n", sizeof(int));
    printf("Size of char : %zu bytes\n", sizeof(char));
    printf("Size of float : %zu bytes\n", sizeof(float));
    function();
    return 0;
}


