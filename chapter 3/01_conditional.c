#include <stdio.h>

int main(){
    int age = 17;
    
    if(age>=18){
        printf("You are eligible to vote\n");
    }
    else if(age>16){
        printf("You are teen\n");
    }
    else{
        printf("You are not eligible to vote\n");
    };

    // anything not zero is true in C
    if(2){
        printf("Printed\n");
    }
    if(0){
        printf("Printed1\n");
    }
    if(-2){
        printf("Printed2\n");
    }

    return 0;
}