#include<stdio.h>

int main()
{
 int number;

   do
    {

        printf("Enter a positive num :");
        scanf("%d",&number);

        if(number>0)
        {
            printf("Valid");
        }
        else
            printf("Invalid");
    } while(number!=0);

    return 0;
}