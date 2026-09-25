#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    int guessnum = 0;
    int num;
    // Seed the random number generator
    srand(time(0));

    // Generate random number 
    randomNumber = (rand() % 100) + 1;
    
    printf("Guess a number\n");
    do{
        scanf("%d",&num);
        if (num < randomNumber)
        {
            printf("Guess a higher number\n");
        }
        else if(num > randomNumber){
            printf("Guess a lower Number\n");
        }
        else{
            printf("Congrates!\n");
        }
           
        guessnum++;
    }while (num != randomNumber);

    printf("You Guess the number in %d attemps\n SCORE: %d",guessnum,guessnum);
  

    return 0;
}
