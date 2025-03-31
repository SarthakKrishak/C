#include <stdio.h>

int main(){
    int age = 17;
    
    if(age>=18){
        printf("You are eligible to vote");
    }
    else if(age>16){
        printf("You are teen");
    }
    else{
        printf("You are not eligible to vote");
    };

    return 0;
}