#include<stdio.h>

int main()
{
    int choice, num1, num2;

    printf("1.Add\n 2.sub\n 3.div\n");

    printf("Enter a choice : ");
    
    scanf("%d",&choice);

    printf("Enter num1");
    scanf("%d",&num1);

    printf("Enter num2");
    scanf("%d",&num2);

    switch(choice)
    {
        case 1 :
            printf("Sum= %d",num1+num2);

        break;
        case 2 :
            printf("Diff= %d",num1-num2);

        break;
        case 3 :
            printf("Div= %d",num1/num2);
        break;

        default:
            printf("Invalid entry");


    }

}