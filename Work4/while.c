#include<stdio.h>

int main()
{

    int number=5

    while(number!=0)
    {

        printf("Enter a positive num :");
        scanf("%d",&number);

        if(number>0)
        {
            printf("Valid");
        }
        else
            printf("Invalid");
    }

    return 0;
}