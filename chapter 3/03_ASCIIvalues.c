// Wheather the entered character is capital or not. use ASCII values
#include <stdio.h>

int main(){
    char ch = 'A';
    // printf("Enter a character: ");
    // scanf("%c", ch);

    if(ch>=97 & ch<=122){
        printf("This is a lower case character");
    }
    else{
        printf("This is a upper case character");
    }
    return 0;
}