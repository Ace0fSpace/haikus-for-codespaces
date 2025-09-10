#include<stdio.h>

int main()
{

    int choice, num1;

    do
    {
    printf("1.square\n 2.cube\n 3.even or odd\n 4.Exit");
    printf("Enter a choice : ");
    
    scanf("%d",&choice);

    printf("Enter num1");
    scanf("%d",&num1);

    switch(choice)
    {
        case 1 :
            printf("Sqr = %d",num1*num1);

        break;
        case 2 :
            printf("Cube= %d",num1*num1*num1);

        break;
        case 3 :
            if(num1%2 ==0)
            {
             printf("Even\n");   
            }
            
            
            else
             printf("Odd");
        break;

        default:
            printf("Invalid entry");


    } while(choice!=4);
    
    return 0;
}