#include <stdio.h>

int main(){

    int i = 4;
    //Integer pointer
    int *j = &i;

    int k = 'A';
    //Char pointer
    char *q = &k;

    printf("The address of i is %p\n", i);
    printf("The address of i is %p\n", &i);
    printf("The address of j is %p\n", j);
    printf("The address of i is %d\n", i);
    printf("The address of q is %p\n", q);

    //Printing the value of the pointer 
    printf("The value at address j is %d", *j);
    return 0;
}