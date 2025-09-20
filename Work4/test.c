#include <stdio.h>

int main()
{
    int num;

    do
    {
        printf("Enter positive integer (0 to quit): ");
        scanf("%d", &num);

        if (num != 0) 
        {
            if (num % 2 == 0)
                printf("Even Number\n");
            else
                printf("Odd Number\n");
        }
    } while (num != 0);

    return 0;
}