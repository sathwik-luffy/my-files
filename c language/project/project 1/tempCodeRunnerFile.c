#include <stdio.h>
#include <stdlib.h>
#include<time.h>
    int main(){
        int guessed;
        int no_of_guesses=0;
        srand(time(0));
        int randum_number = (rand() % 100) + 1;
         printf("randum number : %d\n", randum_number);
       
        
        do
        {
            printf("guess the number :- ");
            scanf("%d",&guessed);
            no_of_guesses++;
            if (guessed<randum_number)
            {
                printf("the number is less than randoum number\n");
            }
            else if (guessed>randum_number)
            {
                printf("the number is greater than randoum number\n");
            }
            
            
             } while (guessed!=randum_number);
           printf("you have guessed the number in %d times",no_of_guesses);
           
            

     return 0;
}
