#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int no_of_guess = 0;

    printf("Guess the number:");
    int guessed;
    do
    {
        scanf("%d", &guessed);
        if (guessed < randomNumber)
        {
            printf("Too low, try again:");
        }
        else if (guessed > randomNumber)
        {
            printf("Too high, try again:");
        }
        else
        {
            printf("You guessed it right !! in %d tries", no_of_guess);
        }
        no_of_guess++;

    } while (guessed != randomNumber);

    return 0;
}