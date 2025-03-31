#include <stdio.h>

int main(){
    int a = 10;
    int *j = &a;
    int **k = &j;

    printf("The value of i is %d\n", a);
    printf("The value of j is %d\n", *j);
    printf("The value of j is %d\n", *(&j));
    printf("The value of j is %d\n", **(&j));
    return 0;
}