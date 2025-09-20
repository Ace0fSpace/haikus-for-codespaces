#include<stdio.h>

int main()
{
    int num, sum = 0, larg = -2147483648; 
    int evenCount = 0, oddCount = 0;

    do
    {
        printf("Enter positive integer (0 to quit) : ");
        scanf("%d", &num);

        if (num !=0)
        {
            sum += num;

            if (num > larg)
                larg = num;
            if (num % 2 ==0)
            {
                printf("Even Number\n");
                evenCount++;
            } 
            else
            {
                printf("Odd Number\n");
                oddCount++;
            }
                
            if (num >0)
                printf("Positive Number\n");
            else 
                printf("Negative Number\n");
        }                        
    }   while(num != 0);
    if(num == 0)
        printf("Zero\n");

    printf("\nSum, count, largest number, count of even and odd numbers of everything entered:\n");
    printf("Sum of all number entered = %d\n", sum);
    printf("The largest number entered = %d\n", (larg == -2147483648 ? 0 : larg));
    printf("The count of even numbers =%d\n", evenCount);
    printf("The count of odd numbers = %d\n", oddCount);
     
    return 0;
}
