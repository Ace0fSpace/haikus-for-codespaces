#include<stdio.h>

int main()
{
    int num, exp, power, choice, sum;


    do
    {
        printf("Enter choice \n 1.Power\n 2.Sum to n\n 3.Exit\n Choice :");
        scanf("%d", &choice);

        if(choice ==1)
        {
            power = 1;
            printf("Enter the base number: ");
            scanf("%d", &num);

            printf("Enter the exponent: ");
            scanf("%d", &exp);
        
            for(int i=0;i<exp;i++)
            {
                power = power * num;
            }

            printf("%d^%d = %d\n", num, exp, power);

        }
        else if (choice == 2)
        {
            sum = 0;
            printf("Enter a positive number: ");
            scanf("%d", &num);

            while (num > 0)
            {
                sum = sum + num;
                num--;
            }

            printf("Sum = %d\n", sum);
        }
        else if(choice == 3)
        {
            printf("Exiting program\n");
        }
        else
        {
            printf("Invalid choice, try again.\n");
        }
    } while (choice != 3);

    return 0;
}