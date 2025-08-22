#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    int number_of_guesses=0;
    srand(time(NULL)); // seed with current time
    
    int randomNum = (rand() % 100) + 1; // range 1-100
    printf("Random number: %d\n", randomNum);
    do
    {
        printf("enter the number hear :-");
        scanf("%d",&guess);
        if (randomNum < guess){
                        printf("please enter less number\n");

        }
        else if (randomNum > guess)
        {
            printf("please enter a greater number\n");
        }
    
        number_of_guesses++;
        
    } while (randomNum!=guess);
    printf("you have guessed the number in %d attempt", number_of_guesses);



    return 0;
}


