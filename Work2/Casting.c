#include<stdio.h>

int main()
{

    int var1 ,var2;

    printf("Enter the first number");
    scanf("%d",&var1);

    
    printf("Enter the second number");
    scanf("%d",&var2);

    printf("The div of 2 numbers = %.2f" ,(float)var1/var2);
    
    printf("The sum of 2 numbers = %d" ,(int)var1+var2);
    
    printf("The diff of 2 numbers = %d" ,(int)var1-var2);
    
    printf("The mult of 2 numbers = %d" ,(int)var1*var2);

    printf("The rem of 2 numbers = %d" ,(int)var1%var2);
    
    return 0;
}