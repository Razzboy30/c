#include<stdio.h>
#include <math.h>
int main(){
    

    int guessnum = 17;
    int guess;
    int guesses = 3;
    int out = 0;

    while( guess != guessnum && guesses != out){
        printf("Enter guess number:");
        scanf("%d", &guess);

        
        // printf("%d", guess);

        if (guess > guessnum && guesses != out){
            printf("Try a lower number\n");
            guesses--;
            printf("You have %d guesses left\n", guesses);
        } else if (guess < guessnum && guesses != out) {
            printf("Try a higher number\n");
            guesses--;
            printf("You have %d guesses left\n", guesses);
        } else if(guessnum == guess && guesses != out){
            printf("You Win");
        } 
        // else if (guesses == 0){
        //     printf("You Lose");
        //     break;
        // } else{
        //     printf("hi");
        //     break;
        // }
        
        if (guesses == 0)
        {
            printf("You lose");
        }
        
        //  else if(guesses == out){
        //     printf("You Lose");
        // }

        // if (guesses == out){
        //     printf("You Lose");
        //     break;
        // } else{
        //     printf("You have %d guesses left\n", guesses);
        // }
    }
    // printf("You lose");
}