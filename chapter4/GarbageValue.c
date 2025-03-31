#include <stdio.h>

int main(){
    
    // Now in this program we will get a garbage value as we have not initialized the a value.

    int a;
    do
    {
        printf("%d\n", a);
        a++;
    } while (a<4);
    
    return 0;
}