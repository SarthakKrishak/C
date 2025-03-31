#include <stdio.h>

int main(){
    //Taking ip from the user
    char st[50];
    printf("Enter a string: ");
    gets(st);
    puts(st);
    printf("%s", st);
    return 0;
}