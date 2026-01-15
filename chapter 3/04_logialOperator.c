#include <stdio.h>

int main(){
    int a=1, b=0;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("The not value is %d", !a);

    if(a&&b){
        printf("What are you telling me");
    }
    return 0;
}