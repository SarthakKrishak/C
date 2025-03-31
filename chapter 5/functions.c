#include <stdio.h>

// Funtion prototype
int sum(int, int);

//Funtion definition
int sum(int x, int y){

    printf("The sum is %d", x + y);
    return x + y;
}

int main(){
    // int a = 1;
    // int b = 2;
    // sum(a, b);


    int a = 4;
    
    //Its executing it from right to left.
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}