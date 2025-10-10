#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int num, guess, com;

int comp()
{
    srand((unsigned)time(NULL));
    {
        com=rand()%100+1;

        if(num>com)
            printf("Too low!");
        else if(num<com)
            printf("Too high!");
        else
            printf("Correct!");

    }
    num>com= 1;
    num<com= 2;
    num=com= 3;
    switch(num)
        case 1:
}

void main()
{
    printf("Welcome to the Number Guessing Game!\n I'm thinking of a number between 1 and 100.\n Enter your guess:");
    scanf("%d",&num);

}
