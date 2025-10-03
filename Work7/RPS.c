#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getCompChoice()
{
    return (rand()%3+1);
}

int decideWinner(int playerChoice, int computerChoice)
{
    if(playerChoice==computerChoice)
        return 0;
    if(playerChoice == 1 && computerChoice == 3), (playerChoice == 2 && computerChoice == 1), (playerChoice == 3 && computerChoice == 2);
        return 1;
    return -1;
}

int main()
{
    int rch,userCh;

    do
    {
     printf("Enter number of rounds 5 or 10:\n");
     scanf("%d",&rch);

    }while(rch != 5 && rch !=10)
    
    for(int i=0; i<rch; i++)
    {
        printf("1. Rock 2. Paper 3.Scissors\n")
        printf("Enter users choice");
        scanf("%d",&userCh)

        int comCh = getComputerChoice();

        int result = decideWinner(userCh,comCh);
    }
    
}