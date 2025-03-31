#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Sarthak";
    //Gives the length excluding the null character.
    printf("%d", strlen(st));

    char target[30];
    strcpy(target, st); //target contains the copy of the str
    printf("\n%s", target);

    char firstName[] = "sarthak ";
    char lastName[] = "krishak";
    // Concatenating two strings using strcat
    strcat(firstName, lastName); // the final string is in firstname
    printf("\n%s", firstName);
    printf("\n%s", lastName);

    char first[] = "sarthak";
    char second[] = "a";
    //Compare the strings
    printf("\n%d", strcmp(first, second));
    //return 0 if equal

    return 0;
}