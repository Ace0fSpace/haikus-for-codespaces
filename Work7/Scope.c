#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rounds, choice, robo;

int main()
{
    srand((unsigned)time(NULL));
    printf("Welcome to rock, paper, scissors!\n");

    printf("\nHow many rounds?\n (5 or 10)\n ");
    scanf("%d", &rounds);

    if(rounds == 5)
    {
        robo = rand()%3+1;
        printf("Round 1\n Enter\n 1 = Rock\n 2 = Paper\n 3 = Scissors\n");
        scanf("%d", &choice);

        printf("You selected: %d, Computer selected: %d", choice, robo);
        if(choice < robo);
        {
             printf("You Win");
            else if (choice !< robo)
                printf("Robot Wins");
            else if(robo == choice)
                printf("Draw");
        }
           
    }
    
}

