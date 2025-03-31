#include <stdio.h>

int main(){
    int i = 5;
    printf("%d\n", i);
    i = i + 5; // 10
    printf("%d\n", i);
    prinf("%d\n", i++);
    printf("%d\n", i);
    printf("%d\n", ++i);

    // i++ first print and then decrement (POST increment operator).
    // ++i first increment and then print (PRE increment operator).

    i += 2; // its same as i = i+2;

    return 0;
}