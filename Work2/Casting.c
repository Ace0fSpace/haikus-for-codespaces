#include<stdio.h>

int main()
{

    int var1 ,var2;

    printf("Enter the first number: ");
    scanf("%d",&var1);

    
    printf("Enter the second number: ");
    scanf("%d",&var2);

    printf("The div of 2 numbers = %.2f" ,(float)var1/var2);
    
    printf("The sum of 2 numbers = %d" ,(int)var1+var2);
    
    printf("The diff of 2 numbers = %d" ,(int)var1-var2);
    
    printf("The mult of 2 numbers = %d" ,(int)var1*var2);

    printf("The rem of 2 numbers = %d\n" ,(int)var1%var2);
    
    
    int min;

    printf("Enter the number of minutes:");
    scanf("%d",&min);

    printf("The number of hours = %d The number of mins = %d\n",min/60,min%60);
    
    int var3 ,var4;

    printf("Enter the first number: ");
    scanf("%d",&var3);

    
    printf("Enter the second number: ");
    scanf("%d",&var4);
    printf("less than=%d\n", var3<var4);
    printf("less than or equal to=%d\n", var3<=var4);
    printf("greater than=%d\n", var3>var4);
    printf("greater than or equal to=%d\n", var3>=var4);
    printf("equal to=%d\n", var3=var4);
    printf("not equal to=%d\n", var3!=var4);
    
    return 0;
}