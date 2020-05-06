#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 7; /* Number to guess for*/
    int guess;
    int guessCount = 0;   /*Number of times user guesses*/
    int guessLimit = 3;   /* Highest Number a User came guess*/
    int outofGuesses = 0; /* No more guesses for the User*/

    printf ("Hello!\n");
    printf ("This is a guessing game. Kindly guess the secret number! \n");
    while (guess != secretNumber && outofGuesses == 0){
        if (guessCount < guessLimit){
        printf(" Guess the Secret Number:");
        scanf("%d", &guess);
        guessCount++;
        } else{
            outofGuesses = 1;
        }
       }
       if (outofGuesses == 1){
        printf ("Game Over!");
       } else{
       printf ("You Win!");
       }


    return 0;
}
