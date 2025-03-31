#include <stdio.h>

//function prototype
int sum(int, int);

int main(){
    int a = 5;
    int b = 2;
    printf("the sum is %d", sum(a, b));
    return 0;
}

int sum(int x,int y){
    return x + y;
}