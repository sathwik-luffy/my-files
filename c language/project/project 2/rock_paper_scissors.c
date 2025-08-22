#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()
int main()
{
    srand(time(NULL));
    printf("enter your number b/w 0 to 2\n");
    printf("0--> rock\n1-->papper\n2--> scissors\n");

    int player;
    scanf("%d", &player);
    /*  0--> rock
        1--> papper
        2--> scissors  */

    int computer = rand() % 3;
    if (player == 0)
    {
        printf("you have chosen:- rock\n");
    }
    else if (player == 1)
    {
        printf("you have chosen:- papper\n");
    }
    else if (player == 2)
    {
        printf("you have chosen:- scisors\n");
    }

    if (computer == 0)
    {
        printf("comuter have choosen:- rock\n");
    }
    else if (computer == 1)
    {
        printf("comuter have choosen:- papper\n");
    }
    else if (computer == 2)
    {
        printf("comuter have choosen:- scissors\n");
    }

    // printf("you have chosesn :- %d\n",player);
    // printf("computer have chosen :-%d\n",computer);
    if (player == 0 & computer == 1)
    {
        printf("sorry you have lost\n");
    }
    else if (player == 0 & computer == 2)
    {
        printf("you have won\n");
    }
    else if (player == 1 & computer == 0)
    {
        printf("you have won\n");
    }
    else if (player == 1 & computer == 2)
    {
        printf("sorry you have lost\n");
    }
    else if (player == 2 & computer == 0)
    {
        printf("sorry you have lost\n");
    }
    else if (player == 2 & computer == 1)
    {
        printf("you have won\n");
    }
    else
    {
        printf("please try again");
    }

    return 0;
}